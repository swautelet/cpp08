#include "Span.hpp"

Span::Span():_size(0)
{

}

Span::Span(unsigned int n):_size(n)
{
	// this->_content = new int[n];
}

Span::Span(const Span& copi):_size(copi._size)
{
	// this->_content = new int(this->_size);
	// for (int i = 0; i < this->_size; i++)
	// {
	// 	this->_content[i] = copi.getelement(i);
	// }
	this->_content = copi._content;
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
		for (int i = 0; i < this->_content.size(); i++)
		{
			for (int j = i + 1; j < this->_content.size(); j++)
			{
				int tmp = this->_content[i] - this->_content[j];
				if (tmp < 0)
				{
					tmp *= -1;
				}
				if (tmp < shortest)
				{
					shortest = tmp;
				}
			}
		}
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
		for (int i = 0; i < this->_content.size(); i++)
		{
			for (int j = i + 1; j < this->_content.size(); j++)
			{
				int tmp = this->_content[i] - this->_content[j];
				if (tmp < 0)
				{
					tmp *= -1;
				}
				if (tmp > longest)
				{
					longest = tmp;
				}
			}
		}
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