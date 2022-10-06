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
	while(begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
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

unsigned int Span::shortestSpan()
{
	if (this->_content.size() < 2)
	{
		throw(SpantooShort());
	}
	else
	{
		unsigned int	shortest = UINT_MAX;
		std::sort(this->_content.begin(), this->_content.end());
		std::vector<int>::iterator it(this->_content.begin()), ite(this->_content.end());
		unsigned int	tmp;
		while(it != ite - 1)
		{
			tmp = *(it + 1) - *it;
			if (tmp < shortest)
			{
				shortest = tmp;
			}
			it++;
		}
		return(shortest);
	}
}

unsigned int Span::longestSpan()
{
	if (this->_content.size() < 2)
	{
		throw(SpantooShort());
	}
	else
	{
		std::sort(this->_content.begin(), this->_content.end());
		unsigned int	longest = this->_content.back() - this->_content.front();
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