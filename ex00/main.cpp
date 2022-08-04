#include "easyfind.hpp"
#include <array>

int main()
{
	const unsigned int size = 10;
	std::srand(time(NULL));
	std::array<int, size> test;
	for (unsigned int i = 0; i < size; i++)
	{
		test[i] = std::rand() % 10;
		std::cout << "pos " << i << " initialized with " << test[i] << std::endl;
	}
	int res = easyfind(test, 5);
	if (res == -1)
	{
		std::cout << "Number not found" << std::endl;
	}
	else
	{
		std::cout << "Number found in pos " << res << ", it is " << test[res] << std::endl;
	}
	// test with other type of container 
}