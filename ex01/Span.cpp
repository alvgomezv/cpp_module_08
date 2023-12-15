#include"Span.hpp"

Span::Span(void) : _N(0) {}

Span::Span(int N) : _N(N) {}

Span::Span(const Span& other) : _vect(other._vect), _N(other._N) {}

Span& Span::operator=(const Span& other)
{
	_N = other._N;
	_vect = other._vect;
	return (*this);
}

Span::~Span(void) {}

void	Span::addNumber(int n)
{
	if (_vect.size() == _N)
		throw Span::FullException();
	_vect.push_back(n);
}

int		Span::shortestSpan(void)
{
	if (_N == 0 || _N == 1)
		throw Span::NoSpanException();
	else if (_N == 2)
		return (std::abs(_vect[0] - _vect[1]));
	else
	{
		std::sort(_vect.begin(), _vect.end());

		int shortest = std::abs(_vect[1] - _vect[0]);
		for (unsigned long i = 0; i < (_vect.size() - 1); i++)
		{
			if (std::abs(_vect[i + 1] - _vect[i]) < shortest)
				shortest = std::abs(_vect[i + 1] - _vect[i]);
		}
		if (shortest == 0)
			throw Span::NoSpanException();
		return shortest;
	}
}

int		Span::longestSpan(void)
{
	if (_N == 0 || _N == 1)
		throw Span::NoSpanException();
	else if (_N == 2)
		return (std::abs(_vect[0] - _vect[1]));
	else
	{
		std::sort(_vect.begin(), _vect.end());

		int span = std::abs(_vect[_vect.size() - 1] - _vect[0]);
		if (span == 0)
			throw Span::NoSpanException();
		return span;
	}
}

void	Span::addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}