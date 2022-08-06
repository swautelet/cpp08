#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& copi);
		Span(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		~Span();
		class SpanFull: public std::exception{
			public:
				const char* what() const throw();
		};
		class SpantooShort:public std::exception{
			public:
				const char* what() const throw();
		};
		Span& operator =(const Span& copi);
		void	addNumber(int ind);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		int	getelement(int i) const;
		int	getactualsize() const;
		unsigned int	getsize() const;
		// template < class Iterator >
		// void	addNumber(Iterator begin, Iterator end)
		// {
		// 	if (this->_content.size() + std::distance(begin, end) > this->_size)
		// 		throw(SpanFull());
		// 	else
		// 		std::copy(begin, end, std::back_inserter(this->_content));
		// 	// std::sort(this->_content.begin(), this->_content.end());
		// }

	private:
		unsigned int _size;
		std::vector<int> _content;

	protected:
};
template <class T>
void swap (T& a, T& b)
{
	T tmp = b;
	b = a;
	a = tmp;
};
#endif