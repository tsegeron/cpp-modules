//
// Created by Ural Shagiziganov on 18.03.2022.
//

#include "StrReplacer.hpp"

StrReplacer::StrReplacer()
{
}

StrReplacer::~StrReplacer()
{
}

void	StrReplacer::replace(std::string const &filename, std::string const &find, std::string const &replace)
{
	if (filename.empty())
		throw "Filename is empty";
	if (find.empty())
		throw "String to find is empty";
	if (replace.empty())
		throw "String to replace with is empty";
	if ((filename + ".replace").length() > 255)
		throw "Filename lenght is too long, won't be possible to create output file";


	std::ifstream	infile;
	infile.open(filename, std::ios::in);
	if (!infile.is_open())
		throw "Input file wasn't open";

	std::string		outFileName = filename + ".replace";
	std::ofstream	outfile;
	outfile.open(outFileName, std::ios::trunc | std::ios::out);
	if (!outfile.is_open())
	{
		infile.close();
		throw "Output file wasn't open";
	}

	std::string	buffer;
	size_t		iFound;
	while (!infile.eof())
	{
		std::getline(infile, buffer);
		iFound = buffer.find(find);
		if (iFound != std::string::npos)
		{
			buffer.erase(iFound, find.length());
			buffer.insert(iFound, replace);
		}
		outfile << buffer << std::endl;
	}

	infile.close();
	outfile.close();
}
