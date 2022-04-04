//
// Created by Grubbly Ernesto on 3/26/22.
//

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <exception>
# include <cctype>
# include <cstdlib>
# include <cerrno>
# include <cmath>
# include <cfloat>
# include <limits>

class	Conversion	{
private:
		Conversion() {};
		Conversion(Conversion const &src) {};
		Conversion & operator = (Conversion const &src) {return *this;};
		virtual	~Conversion() {};

		static bool	checkLine(std::string const &str, const char *src);
		static void	printChar(const char *str);
		static void	printInt(double num, bool flag);
		static void	printFloat(double num, bool flag);
		static void	printDouble(double num, bool flag);


public:
		static bool	PrintConverted(char const *src);
};

//std::ostream & operator << (std::ostream &o, Conversion const &src);

#endif //CONVERSION_HPP
