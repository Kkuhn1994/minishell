#include <iostream>
#include <iomanip>

class Contact
{
public:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNr;
	std::string secret;

	Contact()
		: firstName(""), lastName(""), nickName(""), phoneNr(""), secret("")
	{
	}

	Contact(std::string fName, std::string lName, std::string nName, std::string phone, std::string secr)
	{
		firstName = fName;
		lastName = lName;
		nickName = nName;
		phoneNr = phone;
		secret = secr;
	}
};

class PhoneBook
{
private:
	Contact phoneBook[8];
	int nrContacts;
	int indexOldest;

public:
	PhoneBook()
	{
		nrContacts = 0;
		indexOldest = 0;
	}

public:
	void AddContact()
	{
		std::string firstName, lastName, nickName, phoneNr, secret;

		std::cout << "Please enter First Name" << std::endl;
		std::getline(std::cin, firstName);
		std::cout << "Please enter Last Name" << std::endl;
		std::getline(std::cin, lastName);
		std::cout << "Please enter Nick Name" << std::endl;
		std::getline(std::cin, nickName);
		std::cout << "Please enter Phone Nr" << std::endl;
		std::getline(std::cin, phoneNr);
		std::cout << "Please enter secret" << std::endl;
		std::getline(std::cin, secret);

		if (nrContacts < 8)
		{
			phoneBook[nrContacts] = Contact(firstName, lastName, nickName, phoneNr, secret);
			nrContacts++;
		}
		else
		{
			phoneBook[indexOldest] = Contact(firstName, lastName, nickName, phoneNr, secret);
			if (indexOldest < 8)
				indexOldest++;
			else
				indexOldest = 0;
		}
	}

public:
	void searchContact()
	{
		int i = 0;
		std::string index;

		while (i < nrContacts)
		{
			std::cout << std::left << std::setw(10) << i;
			std::cout << "|";
			PrintInformation(phoneBook[i].firstName);
			PrintInformation(phoneBook[i].lastName);
			PrintInformation(phoneBook[i].nickName);
			PrintInformation(phoneBook[i].phoneNr);
			std::cout << std::endl;
			i++;
		}
		std::cout << "Which contact do you wanna see?" << std::endl;
		std::getline(std::cin, index);
		i = index[0] - '0';
		PrintInformation(phoneBook[i].firstName);
		PrintInformation(phoneBook[i].lastName);
		PrintInformation(phoneBook[i].nickName);
		PrintInformation(phoneBook[i].phoneNr);
		PrintInformation(phoneBook[i].secret);
	}

private:
	void PrintInformation(std::string toPrint)
	{
		std::string cuttedString;
		int i = 0;

		while (toPrint[i] != 0)
			i++;
		if (i < 10)
			std::cout << std::right << std::setw(10) << toPrint;
		else
		{
			cuttedString = toPrint.substr(0, 9) + ".";
			std::cout << std::right << std::setw(10) << cuttedString;
		}
		std::cout << "|";
	}
};

int main(void)
{
	PhoneBook book;
	std::string command;

	while (1)
	{
		std::cout << "Enter one of those commands : add, search, exit" << std::endl;
		std::getline(std::cin, command);
		if (command == "exit")
			break;
		if (command == "add")
			book.AddContact();
		if (command == "search")
			book.searchContact();
	}
	return 0;
}