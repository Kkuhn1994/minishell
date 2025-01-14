#include <iostream>
#include <string>

template <class T>
class Array
{
public:
	Array();
	Array(unsigned int _length);
	~Array();
	Array(Array const &in);
	Array &operator=(const Array &in);
	T &operator[](unsigned int index) const;
	unsigned int size() const;
	void printArray(std::ostream &stream) const;

	class IndexTooHighException : public std::exception
	{
	public:
		const char *what() const noexcept override
		{
			return "Index is too high!";
		}
	};

protected:
	unsigned int _length;
	T *array;
};

template <class T>
Array<T>::Array()
{
	array = new T[0];
	_length = 0;
}

template <class T>
Array<T>::Array(unsigned int length)
{
	array = new T[length];
	_length = length;
}

template <class T>
Array<T>::~Array()
{
	std::cout << "array destroyed" << std::endl;
	delete[] array;
}

template <class T>
Array<T>::Array(Array<T> const &in)
{
	array = new T[in.size()];
	_length = in.size();
	size_t i = 0;
	while (i < in.size())
	{
		array[i] = in.operator[](i);
		i++;
	}
}

template <class T>
T &Array<T>::operator[](unsigned int index) const
{
	if (index >= size())
	{
		throw std::out_of_range("Index out of range"); // Wirft eine Ausnahme, wenn der Index ungültig ist
	}
	if (index >= _length)
		throw IndexTooHighException();
	if (index < _length)
		return array[index];
	throw IndexTooHighException();
}

template <class T>
Array<T> &Array<T>::operator=(Array<T> const &in)
{
	if (array != NULL)
		delete[] array;
	_length = in.size();
	array = new T[_length];
	unsigned int i = -1;
	while (++i < in.size())
		array[i] = in[i];
	return *this;
}

template <class T>
void Array<T>::printArray(std::ostream &stream) const
{
	if (size() == 0)
		return;
	for (unsigned int i = 0; i < _length - 1; i++)
		stream << array[i] << " - ";
	if (unsigned int i = _length - 1)
		stream << array[i];
}

template <class T>
std::ostream &operator<<(std::ostream &stream, Array<T> const &in)
{
	in.printArray(stream);
	return stream;
}

template <class T>
unsigned int Array<T>::size() const
{
	return _length;
}