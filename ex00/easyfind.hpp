#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template<class T>
int	easyfind(T inclass, int ind){
	for (int i = 0; i < inclass.size(); i++)
	{
		if (inclass[i] == ind)
		{
			return i;
		}
	}
	return -1;
};

#endif