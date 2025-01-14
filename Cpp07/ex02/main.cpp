#include "Array.hpp"

int main(void)
{
	// {

	// Array<int> a;
	// Array<int> b(4);
	// Array<int> c(2);
	// Array<int> d(c);
	// c[0] = 10;
	// std::cout << "a:" << a << std::endl;
	// std::cout << "b:" << b << std::endl;
	// std::cout << "c:" << c << std::endl;
	// c = b;
	// b[2] = 5;
	// try
	// {
	// 	b[6] = 0;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }
	// std::cout << a.size() << "-" << b.size() << std::endl;
	// std::cout << "b:" << b << std::endl;
	// std::cout << "c:" << c << std::endl;
	// std::cout << "d:" << d << std::endl;
	// }

	// {
	Array<std::string> a;
	Array<std::string> b(4);
	Array<std::string> c(2);
	Array<std::string> d(a);

	c[0] = "Eric";
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" << c << std::endl;
	c = b;
	b[2] = "Michel";
	try
	{
		b[6] = "Erreur";
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << a.size() << "-" << b.size() << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "d:" << d << std::endl;
	//	}
}

// #define MAX_VAL 750
// int main(int, char **)
// {
// 	Array<int> numbers(MAX_VAL);
// 	int *mirror = new int[MAX_VAL];
// 	srand(time(NULL));
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		const int value = rand();
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}
// 	// SCOPE
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		if (mirror[i] != numbers[i])
// 		{
// 			std::cerr << "didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}
// 	try
// 	{
// 		numbers[-2] = 0;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		numbers[MAX_VAL] = 0;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		numbers[i] = rand();
// 	}
// 	delete[] mirror;
// 	return 0;
// }