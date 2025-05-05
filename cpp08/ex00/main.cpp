#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vec = {1, 2, 3, 4, 5};
	std::set<int> set = {1, 2, 3, 4, 5, 5};
	std::list<int> list = {1, 2, 3, 4, 5};
	std::array<int, 5> array = {1, 2, 3, 4, 5};

	try
	{
		std::cout << easyfind(vec, 3) << std::endl;
		std::cout << *easyfind(vec, 3) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << easyfind(vec, 10) << std::endl;
		std::cout << *easyfind(vec, 10) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << easyfind(set, 8) << std::endl;
		std::cout << *easyfind(set, 8) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << easyfind(set, 3) << std::endl;
		std::cout << *easyfind(set, 3) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << easyfind(array, 8) << std::endl;
		std::cout << *easyfind(array, 8) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << easyfind(array, 3) << std::endl;
		std::cout << *easyfind(array, 3) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << easyfind(list, 8) << std::endl;
		std::cout << *easyfind(list, 8) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << easyfind(list, 3) << std::endl;
		std::cout << *easyfind(list, 3) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}