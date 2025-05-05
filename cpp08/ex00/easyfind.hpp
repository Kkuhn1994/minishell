#include <iostream>
#include <vector>
#include <set>
#include <list>

class NumberNotFoundException : public std::exception
{
public:
	const char *what() const noexcept override
	{
		return "number not found exception!";
	}
};

template <typename T>
const int *easyfind(T &container, int number)
{
	typename T::iterator index = std::find(container.begin(), container.end(), number);
	if (index != container.end())
	{
		return &(*index);
	}
	else
		throw NumberNotFoundException();
}
