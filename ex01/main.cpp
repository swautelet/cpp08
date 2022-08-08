#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "The shortest span is " << sp.shortestSpan() << std::endl;
		std::cout << "The longest span is " << sp.longestSpan() << std::endl;
	}
	int size = 10;
	std::srand(time(NULL));
	{
		std::vector<int> lol;
		{
			for (int i = 0; i < size; i++)
			{
				lol.push_back(std::rand() % 20);
				std::cout << "Vector filled with " << lol[i] << std::endl;
			}
		}
		Span sp(lol.begin(), lol.end());
		std::cout << "The size of vector is " << sp.getsize() << std::endl;
		std::cout << "The shortest span is " << sp.shortestSpan() << std::endl;
		std::cout << "The longest span is " << sp.longestSpan() << std::endl;
	}
}