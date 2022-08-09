#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <map>
#include <deque>
#include <vector>

class NumbernotFound:public std::exception{
	public:
	const char* what() const throw(){
		return "Number not found!";
	}
};
template<class T>
typename T::iterator	easyfind(T inclass, int ind){
<<<<<<< HEAD
=======
	// for (unsigned long int i = 0; i < inclass.size(); i++)
	// {
	// 	if (inclass[i] == ind)
	// 	{
	// 		return i;
	// 	}
	// }
>>>>>>> 077cd8bfdfd46c8a46188b71b5e4f64521b28b5d
	typename T::iterator res = find(inclass.begin(), inclass.end(), ind);
	if (res == inclass.end())
	{
		throw(NumbernotFound());
	}
	else
	{
		return res;
	}
};

#endif