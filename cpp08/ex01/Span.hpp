#include <set>
#include <iostream>
#include <random>
#include <ctime>

class Span
{
public:
	Span();
	~Span();
	Span(unsigned int size);
	Span(const Span &in);
	Span &operator=(const Span &in);

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();
	unsigned int getSize() const;
	std::set<int> getCopyOfNumberStorage() const;
	void generateRandomNumbers();
	void printSpan();

	class TooManyNumbersException : public std::exception
	{
	public:
		const char *what() const noexcept override
		{
			return "Too many Numbers added!";
		}
	};

private:
	unsigned int length;
	unsigned int numbersFilled;
	std::set<int> numberStorage;
};