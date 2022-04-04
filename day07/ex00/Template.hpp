//
// Created by Grubbly Ernesto on 3/30/22.
//

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP
# include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const &max(T const &a, T const &b)
{
	return (a >= b ? a : b);
}

template<typename T>
T const &min(T const &a, T const &b)
{
	return (a <= b ? a : b);
}

#endif //TEMPLATE_HPP
