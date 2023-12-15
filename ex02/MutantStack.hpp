#ifndef MutantStack_hpp
# define MutantStack_hpp

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		
		typedef typename std::stack<T>::container_type container; //container used by the stack (deque by default)
		typedef typename container::iterator 			iterator; //iterator available on the container used by the stack

		MutantStack(void);
		MutantStack(const MutantStack<T>& other);
		MutantStack<T>& operator=(const MutantStack<T>& other);
		virtual ~MutantStack(void);

		iterator begin(void);
		iterator end(void);
};

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other) 
{
	*this = other;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other)
{
	*this = other;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin()); // c is the container of the stack (deque by default)
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

#endif
