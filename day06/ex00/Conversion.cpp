//
// Created by Grubbly Ernesto on 3/26/22.
//

# include "Conversion.hpp"
# define print(name, val) std::cout << name << ": " << val << std::endl

//	----------Conversion----------	//

void	Conversion::printChar(const char *str)
{
	char	*end;
	double	num = std::strtod(str, &end);

	if (!*end)
	{
		if (std::isnan(num) || std::isinf(num) || num < 0 || num > 127)
			print("Char", "impossible");
		else if (!isprint(static_cast<char>(num)))
			print("Char", "non-displayable");
		else
			std::cout << "Char: " << "'" << static_cast<char>(num) << "'" << std::endl;
	}
	else
	{
		std::string	tmp(str);
		if (tmp.length() == 1)
		{
			if (isprint(tmp[0]))
				std::cout << "Char: " << "'" << str << "'" << std::endl;
			else
				print("Char", "non-displayable");
		}
		else
			print("Char", "impossible");
	}
}

void	Conversion::printInt(double num, bool flag)
{
	if (isinf(num) || isnan(num) || flag || num > INT_MAX || num < INT_MIN)
		print("Int", "impossible");
	else
		print("Int", static_cast<int>(num));
}

void	Conversion::printFloat(double num, bool flag)
{
	if (flag)
		print("Float", "impossible");
	else if (!(num - static_cast<int>(num)))
		std::cout << std::fixed << std::setprecision(1) <<"Float: " << static_cast<float>(num) << "f" << std::endl;
	else
		std::cout << "Float: " << static_cast<float>(num) << "f" << std::endl;
}

void	Conversion::printDouble(double num, bool flag)
{
	if (flag)
		print("Double", "impossible");
	else
		print("Double", num);
}

bool	Conversion::checkLine(const std::string &str, const char *src)
{
	char	*end;
	double	tmp = std::strtod(src, &end);

	if (str.empty() || (tmp && str.length() > 0 && *end && str != "nanf"
	&& str != "inff" && str != "-inff" && std::string(end) != "f"))
		return true;
	return false;
}

bool	Conversion::PrintConverted(char const *src)
{
	std::string	String = src;
	bool	flag;
	double	num;

	flag = checkLine(String, src);
	if (String.length() == 1 && !isdigit(src[0]))
		num = src[0];
	else
		num = atof(src);

	printChar(src);
	printInt(num, flag);
	printFloat(num, flag);
	printDouble(num, flag);

	return true;
}
