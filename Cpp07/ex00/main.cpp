#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T c;

	c = a;
	a = b;
	b = c;
}

template <typename T>
T &min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T &max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}

// int main(void)
// {
// 	int a = 0;
// 	int b = 1;
// 	double ad = 1.2;
// 	double bd = 2.5;
// 	float af = 1.2;
// 	float bf = 2.5;

// 	swap(a, b);
// 	std::cout << a << "     " << b << std::endl;
// 	swap(a, b);
// 	std::cout << a << "     " << b << std::endl;
// 	swap(ad, bd);
// 	std::cout << ad << "     " << bd << std::endl;
// 	swap(ad, bd);
// 	std::cout << ad << "     " << bd << std::endl;
// 	swap(af, bf);
// 	std::cout << af << "     " << bf << std::endl;
// 	swap(af, bf);
// 	std::cout << af << "     " << bf << std::endl;

// 	std::cout << min(a, b) << " is the smaller value" << std::endl;
// 	std::cout << max(a, b) << " is the bigger value" << std::endl;
// 	std::cout << min(ad, bd) << " is the smaller value" << std::endl;
// 	std::cout << max(ad, bd) << " is the bigger value" << std::endl;
// 	std::cout << min(ad, bd) << " is the smaller value" << std::endl;
// 	std::cout << max(af, bf) << " is the bigger value" << std::endl;
// }

int main(void)
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}
