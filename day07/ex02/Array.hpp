//
// Created by Ural Shagiziganov on 30.03.2022.
//

#ifndef ARRAY_HPP
# define ARRAY_HPP

# pragma once

# include <iostream>
# include <exception>

template<typename T>
class	Array
{
private:
		T				*ptr;
		unsigned int	len;

public:
		Array();
		Array(unsigned int len);
		Array(Array<T> const &src);
		Array & operator = (Array const &src);
		virtual ~Array();

		T & operator [] (unsigned int idx) const;


		class OutOfBounds : public std::exception {
			const char *what() const throw();
		};

		size_t	size(void)	const;

};

# include "Array.tpp"

#endif //ARRAY_HPP
