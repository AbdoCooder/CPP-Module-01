// Copyright 2025 Abdelkader Benajiba

#define PARAMS_ERR "The program takes three parameters in \
the following order: a filename and two strings, s1 and s2 \n"

#define OPENING_ERR "Error: Can't open the file (check if the file exist and \
have the r permission) \n"

#define CREATING_ERR "Error: Can't create the file \n"

#define EMPTY_S1_ERR "Error: s1 cannot be empty \n"

#include <iostream>
#include <fstream>	// provides file stream classes to perform input and output operations on files

static std::string& replaceOccurrence(std::string& line, const std::string& s1, const std::string& s2)
{
	std::size_t pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
		// line.replace(pos, s1.length(), s2); // this is the original output behavior to mimic (for evaluation)
	}
	return (line);
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cerr << PARAMS_ERR, 1);

	std::string s1(av[2]);
	std::string s2(av[3]);
	if (s1.empty())
		return (std::cerr << EMPTY_S1_ERR, 1);

	std::fstream fileInput(av[1], std::ios::in);	// creating a stream to <filename> for reading
	if (fileInput.fail())
		return (std::cerr << OPENING_ERR, -1);

	std::string newFile = std::string(av[1]) + ".replace";
	std::fstream fileOutput(newFile.c_str(), std::ios::out);	// creating a stream to <filename>.replace for writing
	if (fileOutput.fail())
		return (std::cerr << CREATING_ERR, -1);

	std::string line;
	while (std::getline(fileInput, line))
		fileOutput << replaceOccurrence(line, s1, s2) << std::endl; // replace each s1 by s2

	// cleanup
	fileInput.close();
	fileOutput.close();
	return 0;
}
