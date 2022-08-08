#include "easyfind.hpp"
#include <array>

int main()
{
	const unsigned int size = 10;
	std::srand(time(NULL));
	int	searched = std::rand() % 10;
	std::cout << "For this test i'll search the number " << searched << std::endl << std::endl;
	std::vector<int> vect;
	for (unsigned int i = 0; i < size; i++)
	{
		vect.push_back(std::rand() % 10);
		std::cout << "pos " << i << " initialized with " << vect[i] << std::endl;
	}
	try
	{
		std::vector<int>::iterator res = easyfind(vect, searched);
		std::cout << "Number found in pos " << *res << ", it was the number " << searched << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}