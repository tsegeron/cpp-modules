//
// Created by Grubbly Ernesto on 3/29/22.
//

# include "Array.hpp"
//# include <iostream>

# define LINE	std::cout << "----------------------------------------------" << std::endl;

int main( void ) {

	Array<int> b(4);
	Array<int> a;
	Array<std::string> strings(5);

	LINE
	std::cout << "Проверка есть ли мусорные значения?" << std::endl;
	for(unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " " << std::flush;
	std::cout << std::endl;
	LINE

	std::cout << "Проверка перегузки операторов \'[]\'" << std::endl;

	strings[0] = "One";
	strings[1] = "Two";
	strings[2] = "Three";
	strings[3] = "Four";
	strings[4] = "Five";

	for(size_t i = 0; i < strings.size(); i++)
		std::cout << "strings[" << i << "] = " << strings[i] << std::endl;

	LINE

	std::cout << "Проверка конструктора копирования" << std::endl;
	Array<std::string> copy(strings);
	std::cout << "Array<std::string> copy(strings)" << std::endl;
	for(size_t i = 0; i < copy.size(); i++)
		std::cout << "copy[" << i << "] = " << copy[i] << std::endl;

	LINE

	std::cout << "Проверка перегузки оператора \'=\'" << std::endl;
	a = b;
	std::cout << " a | b " << std::endl;
	for(size_t i = 0; i < a.size(); i++)
		std::cout << " " << a[i] << " | " << b[i] << std::endl;

	LINE

	std::cout << "Проверка изменений при присваивании (после А=Б, изменение А не должно изменять Б и наоборот)" << std::endl;
	for(size_t i = 0; i < b.size(); i++)
		b[i] = i + 1;
	std::cout << " a | b " << std::endl;
	for(size_t i = 0; i < a.size(); i++)
		std::cout << " " << a[i] << " | " << b[i] << std::endl;
	if (a[3] != b[3])
		std::cout << "Изменения в b не затронули пременные a" << std::endl;
	for(size_t i = 0; i < a.size(); i++)
		a[i] = i + 11;
	std::cout << "  a | b " << std::endl;
	for(size_t i = 0; i < a.size(); i++)
		std::cout << " " << a[i] << " | " << b[i] << std::endl;
	if (a[3] != b[3])
		std::cout << "Изменения в a не затронули пременные b" << std::endl;

	LINE

	b[0] = 1324;
	b[1] = 999;

	Array<int> c(b);
	bool proof = true;
	for(unsigned int i = 0; i < b.size(); i++)
	{
		if (b[i] != c[i])
			proof = false;
	}
	if (proof)
		std::cout << "Верно c полная копия b" << std::endl;

	LINE
	try
	{
		for(int i = 0; i < 10; i++)
			std::cout << strings[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	LINE
	return (0);
}
