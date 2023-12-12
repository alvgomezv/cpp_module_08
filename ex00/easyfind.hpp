#ifndef easyfind_hpp
# define easyfind_hpp

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Element not found");
		}
};

template<typename T>
int	easyfind(T& vect, int nbr)
{
	for (int i = 0; i < static_cast<int>(vect.size()); i++)
	{
		if (vect[i] == nbr)
			return (i);
	}
	throw NotFoundException();
}

//typename T::iterator	easyfind(T& vect, int nbr)
//{
//	for (typename T::iterator it = vect.begin(); it != vect.end(); it++)
//	{
//		if (*it == nbr)
//			return (it);
//	}
//	throw NotFoundException();
//}

//typename T::iterator	easyfind(T& vect, int nbr)
//{
//	typename T::iterator it = std::find(vect.begin(), vect.end(), nbr);
//	if (it == vect.end())
//		throw NotFoundException();
//	return (it);
//}




#endif
