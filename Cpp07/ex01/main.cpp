#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*func_ptr)(T &))
{
	size_t i = 0;
	while (i < length)
	{
		func_ptr(array[i]);
		i++;
	}
}

template <typename T>
void multiplyByTwo(T &number)
{
	number = number + number;
}

template <typename T>
void fillArray(T *array, T number, size_t length)
{
	size_t i = 0;
	while (i < length)
	{
		array[i] = number;
		i++;
	}
}

template <typename T>
void printNumber(T &number)
{
	std::cout << " " << number << " ";
}

int main(void)
{

	size_t length = 10;

	int *intArray = new int[length];
	double *doubleArray = new double[length];
	std::string *strArray = new std::string[length];
	std::string insertString = "Puhl";

	fillArray(intArray, 12, length);
	iter(intArray, length, &printNumber<int>);
	iter(intArray, length, &multiplyByTwo<int>);
	std::cout << std::endl;
	iter(intArray, length, &printNumber<int>);
	std::cout << std::endl;

	fillArray(strArray, insertString, length);
	iter(strArray, length, &printNumber<std::string>);
	iter(strArray, length, &multiplyByTwo<std::string>);
	std::cout << std::endl;
	iter(strArray, length, &printNumber<std::string>);
	std::cout << std::endl;

	fillArray(doubleArray, 12.12, length);
	iter(doubleArray, length, &printNumber<double>);
	iter(doubleArray, length, &multiplyByTwo<double>);
	std::cout << std::endl;
	iter(doubleArray, length, &printNumber<double>);
	std::cout << std::endl;
	delete[] (intArray);
	delete[] (doubleArray);
}
