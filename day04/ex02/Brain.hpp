//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef BRAIN_HPP
# define BRAIN_HPP

# pragma once

# include <iostream>
# include <string>

class Brain	{
public:
		std::string	ideas[100];

		Brain(std::string const &word);
		Brain(const Brain &src);
		Brain & operator = (const Brain &src);
		virtual	~Brain();
};

#endif //BRAIN_HPP
