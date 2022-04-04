//
// Created by Grubbly Ernesto on 3/30/22.
//

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T, size_t size>
void	iter(T (&array)[size], size_t len, void (&f)(T const &val))
{
	if (len > sizeof(array) / sizeof(T))
		return;
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

#endif //ITER_HPP
