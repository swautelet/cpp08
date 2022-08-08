#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>

class NumbernotFound:public std::exception{
	public:
	const char* what() const throw(){
		return "Number not found!";
	}
};
template<class T>
int	easyfind(T inclass, int ind){
	for (unsigned long int i = 0; i < inclass.size(); i++)
	{
		if (inclass[i] == ind)
		{
			return i;
		}
	}
	throw(NumbernotFound());
};

#endif