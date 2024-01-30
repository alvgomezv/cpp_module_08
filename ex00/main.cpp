#include"easyfind.hpp"

int main()
{
	std::vector<int> vect;

	for (int i = 0; i < 10; i++)
		vect.push_back(i);

	try
	{
		int n1 = easyfind(vect, 7);
		std::cout << "Found: " << n1 << std::endl;
		int n2 = easyfind(vect, 100);
		std::cout << "Found: " << n2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}

//int main()
//{
//	std::vector<int> vect;
//
//	for (int i = 0; i < 10; i++)
//		vect.push_back(i);
//
//	try
//	{
//		std::vector<int>::iterator it1 = easyfind(vect, 5);
//		std::cout << "Found: " << *it1 << std::endl;
//		std::vector<int>::iterator it2 = easyfind(vect, 100);
//		std::cout << "Found: " << *it2 << std::endl;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << "Error: " << e.what() << '\n';
//	}
//}
