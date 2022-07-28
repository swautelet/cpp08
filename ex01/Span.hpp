#ifndef SPAN_HPP
# define SPAN_HPP

class Span{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& copi);
		~Span();
		Span& operator =(const Span& copi);
		void	addNumber(int ind);
		unsigned int shortestSpan();
		unsigned int longestSpan();


	private:
		unsigned int _size;

	protected:
};

#endif