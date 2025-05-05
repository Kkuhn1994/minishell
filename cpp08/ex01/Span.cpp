#include "Span.hpp"

Span::Span()
{
	length = 0;
	numbersFilled = 0;
	std::cout << "Span is created\n";
}

Span::~Span()
{
	std::cout << "Span is destroyed\n";
}

Span::Span(unsigned int size)
{
	numbersFilled = 0;
	length = size;
}

Span::Span(const Span &in)
{
	*this = in;
}
Span &Span::operator=(const Span &in)
{
	length = in.getSize();
	numberStorage = in.getCopyOfNumberStorage();
	return *this;
}

unsigned int Span::getSize() const
{
	return length;
}

std::set<int> Span::getCopyOfNumberStorage() const
{
	return std::set<int>(numberStorage.begin(), numberStorage.end());
}

void Span::addNumber(int number)
{
	if (numbersFilled == length)
		throw TooManyNumbersException();
	bool noDuplicateNumber = numberStorage.insert(number).second;
	if (noDuplicateNumber)
		numbersFilled++;
}
int Span::shortestSpan()
{
	int span;
	auto it = numberStorage.begin();
	while (it != std::prev(numberStorage.end()))
	{
		int current = *it;
		auto next_it = std::next(it);
		int next = *next_it;
		int result = next - current;
		if (span > result)
		{
			span = result;
		}
		++it;
	}
	return span;
}
int Span::longestSpan()
{
	int first = *numberStorage.begin();
	int last = *numberStorage.rbegin();
	return last - first;
}

void Span::printSpan()
{
	auto it = numberStorage.begin();
	while (it != numberStorage.end())
	{
		int current = *it;
		std::cout << current << " ";
		++it;
	}
}

void Span::generateRandomNumbers()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 100000);

	for (unsigned int i = 0; i < length; ++i)
	{
		int number = dis(gen);
		numberStorage.insert(number);
	}
}