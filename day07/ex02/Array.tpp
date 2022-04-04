//
// Created by Ural Shagiziganov on 30.03.2022.
//

#ifndef ARRAY_TPP
# define ARRAY_TPP

# pragma once

# include "Array.hpp"

template<typename T>
Array<T>::Array()
	: ptr(nullptr), len(0)
{
}

template<typename T>
Array<T>::Array(unsigned int len)
	: len(len)
{
	this->ptr = new T[len]();
}

template<typename T>
Array<T>::Array(Array const &src)
	: ptr(nullptr), len(src.len)
{
	if (len > 0)
	{
		this->ptr = new T[len]();
		for(unsigned int i = 0; i < this->len; i++)
			this->ptr[i] = src.ptr[i];
	}
}

template<typename T>
Array<T> & Array<T>::operator = (Array<T> const &src)
{
	if (this->len)
		delete []this->ptr;

	this->len = src.len;
	if (this->len)
	{
		this->ptr = new T[this->len];
		for(unsigned int i = 0; i < this->len; i++)
			this->ptr[i] = src.ptr[i];
	}
	else
		this->ptr = nullptr;

	return *this;
}

template<typename T>
Array<T>::~Array()
{
	delete [] this->ptr;
}

template<typename T>
T & Array<T>::operator [] (unsigned int idx) const
{
	if (idx >= this->len)
		throw Array<T>::OutOfBounds();
	return this->ptr[idx];
}

template<typename T>
size_t	Array<T>::size(void)	const
{
	return this->len;
}

template<typename T>
const char *Array<T>::OutOfBounds::what() const throw()
{
	return "The index is out of bounds";
}


#endif //ARRAY_TPP
