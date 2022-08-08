#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Last number of stack is " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of stack is " << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737);
	std::cout << "Last number of stack is " << mstack.top() << std::endl;
	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << "Number in the stack is " << *it << std::endl;
	++it; }
	std::stack<int> s(mstack);
	s = mstack;
	return 0;
}