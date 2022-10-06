#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <class T, class container = std::deque<T> >
class MutantStack: public std::stack<T>
{
	public:
	typedef typename container::iterator iterator;

		MutantStack(){
		}
		~MutantStack(){
		}
		MutantStack(const MutantStack<T>& copi){
			std::stack<T>::operator=(copi);
		}
		MutantStack& operator =(const MutantStack<T>& copi){
			std::stack<T>::operator=(copi);
			return *this;
		}
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
		iterator rbegin(){
			return this->c.rbeging();
		}
		iterator rend(){
			return this->c.rend();
		}
		const iterator cbegin()
		{
			return this->c.begin();
		}
		const iterator cend()
		{
			return this->c.end();
		}
		const iterator crbegin(){
			return this->c.rbeging();
		}
		const iterator crend(){
			return this->c.rend();
		}
	private:

	protected:
};

#endif