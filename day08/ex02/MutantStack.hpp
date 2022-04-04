//
// Created by Grubbly Ernesto on 31/03/2022.
//

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <stack>
# include <exception>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T>	{
public:
		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack<T> const &src) : std::stack<T>(src) {};
		MutantStack<T> & operator = (MutantStack<T> const &src) {this->c = src.c; return *this;};
		virtual ~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator				begin() { return this->c.begin(); };
		const_iterator			begin() const { return this->c.begin(); };
		reverse_iterator		rbegin() { return this->c.rbegin(); };
		const_reverse_iterator	rbegin() const { return this->c.rbegin(); };

		iterator				end() { return this->c.end(); };
		const_iterator			end() const { return this->c.end(); };
		reverse_iterator		rend() { return this->c.rend(); };
		const_reverse_iterator	rend() const { return this->c.rend(); };

//		class	OutOfBounsExcep : public std::exception {
//			const char *what() const throw() {
//				return "The index is out of bounds";
//			}
//		};
};

#endif //MUTANTSTACK_HPP
