#include <iostream>
#include <fstream>

std::string replace(std::string buffer, std::string s1, std::string s2)
{
	std::string replacedString;
	int size_of_s1;
	int occurence_of_s1;

	occurence_of_s1 = buffer.find(s1);
	while (occurence_of_s1 != std::string::npos)
	{
		replacedString.append(buffer.substr(0, occurence_of_s1));
		replacedString.append(s2);
		buffer = buffer.substr(occurence_of_s1 + s1.size(), buffer.size());
		occurence_of_s1 = buffer.find(s1);
	}
	return replacedString;
}

int main(int argc, char *argv[])
{
	std::ifstream fileIn(argv[1]);
	std::ofstream fileOut;
	std::string inFile;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string buffer;
	std::string		fileReplace;

	if (argc != 4)
	{
		std::cerr << "Please provide exactly 3 arguments.\n";
		return 1;
	}
	if (fileIn.good() == false)
	{
		std::cerr << "Infile not availlable\n";
		return 1;
	}

	
	inFile = argv[1];
	fileReplace = inFile + ".replace";
	fileOut.open(fileReplace);


	while (std::getline(fileIn, buffer))
	{
		if (buffer.find(s1) == std::string::npos)
			fileOut << buffer << std::endl;
		else
			fileOut << replace(buffer, s1, s2) << std::endl;
	}

	fileIn.close();
	fileOut.close();

	return 0;
}