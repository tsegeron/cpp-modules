//
// Created by Ural Shagiziganov on 18.03.2022.
//

#ifndef STRREPLACER_HPP
# define STRREPLACER_HPP

# include <fstream>
# include <iostream>
# include <string>

class	StrReplacer	{

public:
		StrReplacer();
		virtual	~StrReplacer();

		static void	replace(std::string const &filename, std::string const &find, std::string const &replace);

};

#endif //STRREPLACER_HPP
