#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(INT_MAX);
		sp.addNumber(3);
		sp.addNumber(INT_MIN);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::srand(time(NULL));
	{
		std::vector<int> lol(10);
		{
			for (int i = 0; i < 10; i++)
			{
				lol.push_back(std::rand());
			}
		}
		Span sp(lol.begin(), lol.end());
		std::cout << sp.getsize() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}