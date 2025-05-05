#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef std::stack<T> stack;
	typedef typename stack::container_type container;
	typedef typename container::iterator iterator;

	MutantStack() : stack() {};
	~MutantStack() {};
	MutantStack(MutantStack &in)
	{
		*this = in;
	}
	MutantStack &operator=(const MutantStack &in)
	{
		if (this != &in)
		{
			std::stack<T>::operator=(in);
		}
		return *this;
	}

	// void push(const T &newValue)
	// {
	// 	stack::c.push(newValue);
	// }

	// void pop()
	// {
	// 	stack::c.pop();
	// }

	// T &top()
	// {
	// 	return stack::c.top();
	// }

	// bool empty() const
	// {
	// 	stack::c.empty();
	// }

	// size_t size() const
	// {
	// 	return stack::c.size();
	// }

	iterator begin(void)
	{
		return stack::c.begin();
	}
	iterator end(void)
	{
		return stack::c.end();
	}
};
