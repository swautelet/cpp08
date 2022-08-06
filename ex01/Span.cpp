#include "Span.hpp"

Span::Span():_size(0), _content()
{

}

Span::Span(unsigned int n):_size(n)
{
	// , _content(n)
	// this->_content = new int[n];
}

Span::Span(const Span& copi):_size(copi._size)
{
	// , _content(copi._size)
	// this->_content = new int(this->_size);
	// for (int i = 0; i < this->_size; i++)
	// {
	// 	this->_content[i] = copi.getelement(i);
	// }
	this->_content = copi._content;
}
Span::Span(std::vector<int>::iterator begin, std::vector<int>::iterator end):_size(distance(begin, end))
{
// , _content(distance(begin, end))
}

Span::~Span()
{
	// delete[] this->_content;
}

Span& Span::operator =(const Span& copi)
{
	// for (int i = 0; i < copi._content.size() && i < this->_size; i++)
	// {
	// 	this->_content[i] = copi.getelement(i);
	// }
	this->_content = copi._content;
	return (*this);
}

void	Span::addNumber(int ind)
{
	if (this->_content.size() < this->_size)
	{
		this->_content.push_back(ind);
	}
	else
	{
		throw(SpanFull());
	}
}

const char*	Span::SpanFull::what() const throw()
{
	return ("The Span is full");
}

const char*	Span::SpantooShort::what() const throw()
{
	return ("The Span is too short to compare anything");
}

unsigned int Span::shortestSpan() const
{
	if (this->_content.size() < 2)
	{
		throw(SpantooShort());
	}
	else
	{
		unsigned int	shortest = UINT_MAX;
		std::sort(this->_content.begin(), this->_content.end());
		unsigned int	tmp;
		for (size_t i = 0; i < this->_content.size() - 1; i++)
		{
			tmp = this->_content[i + 1] - this->_content[i];
			if (tmp < shortest)
			{
				shortest = tmp;
			}
		}
		// for (size_t i = 0; i < this->_content.size(); i++)
		// {
		// 	for (size_t j = i + 1; j < this->_content.size(); j++)
		// 	{
		// 		ssize_t tmp = this->_content[i] - this->_content[j];
		// 		if (tmp < 0)
		// 		{
		// 			tmp *= -1;
		// 		}
		// 		unsigned int tmp2 = tmp;
		// 		if (tmp2 < shortest)
		// 		{
		// 			shortest = tmp2;
		// 		}
		// 	}
		// }
		return(shortest);
	}
}

unsigned int Span::longestSpan() const
{
	if (this->_content.size() < 2)
	{
		throw(SpantooShort());
	}
	else
	{
		unsigned int	longest = 0;
		std::sort(this->_content.begin(), this->_content.end());
		unsigned int	tmp;
		for (size_t i = 0; i < this->_content.size() - 1; i++)
		{
			tmp = this->_content[i + 1] - this->_content[i];
			std::cout << this->_content[i] << "-" << this->_content[i + 1] << std::endl;
			if (tmp > longest)
			{
				longest = tmp;
			}
		}
		// for (size_t i = 0; i < this->_content.size(); i++)
		// {
		// 	for (size_t j = i + 1; j < this->_content.size(); j++)
		// 	{
		// 		ssize_t tmp = this->_content[i] - this->_content[j];
		// 		if (tmp < 0)
		// 		{
		// 			tmp *= -1;
		// 		}
		// 		unsigned int tmp2 = tmp;
		// 		if (tmp2 > longest)
		// 		{
		// 			longest = tmp2;
		// 		}
		// 	}
		// }
		return(longest);
	}
}

int	Span::getelement(int i) const
{
	return (this->_content[i]);
}

int	Span::getactualsize() const
{
	return (this->_content.size());
}

unsigned int	Span::getsize() const
{
	return (this->_size);
}