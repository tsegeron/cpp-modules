//
// Created by Grubbly Ernesto on 3/29/22.
//

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <string>
# include <stdint.h>

typedef struct s_data
{
	std::string	name;
	std::string	nickname;
	std::string	phoneNum;
	std::string	secret;
	size_t		age;
}	Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif //SERIALIZE_HPP
