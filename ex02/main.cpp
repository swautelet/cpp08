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
	std::cout << "Stack mstack" << std::endl;
	while (it != ite) {
		std::cout << "Number in the stack is " << *it << std::endl;
	++it; }
	std::stack<int> s(mstack);
	s = mstack;
	MutantStack<int> tester(mstack);
	it = tester.begin();
	ite = tester.end();
	std::cout << "Stack tester" << std::endl;
	while (it != ite) {
		std::cout << "Number in the stack is " << *it << std::endl;
	++it; }
	MutantStack<int> second;
	second = mstack;
	it = second.begin();
	ite = second.end();
	std::cout << "Stack second" << std::endl;
	while (it != ite) {
		std::cout << "Number in the stack is " << *it << std::endl;
	++it; }
	return 0;
}