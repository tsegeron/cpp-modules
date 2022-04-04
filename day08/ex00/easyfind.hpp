//
// Created by Grubbly Ernesto on 31/03/2022.
//

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# pragma once

# include <iostream>
# include <algorithm>
# include <iterator>

template<typename T>
typename T::iterator	easyfind(T &haystack, int needle)
{
	return (std::find(haystack.begin(), haystack.end(), needle));
}

#endif //EASYFIND_HPP
