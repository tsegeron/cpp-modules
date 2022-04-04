//
// Created by Grubbly Ernesto on 31/03/2022.
//

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

class Span {
private:
		size_t	_N;
		std::vector<int>	vec;

		Span();

public:
		explicit	Span(size_t size);
		Span(Span const &src);
		Span & operator = (Span const &src);
		virtual ~Span();

		void	addNumber(int addMe);
		int		shortestSpan();
		int		longestSpan();

		class	SpanIsAlreadyFull : public std::exception	{
			const char *what() const throw();
		};
		class	NotEnoughSpans : public std::exception	{
			const char *what() const throw();
		};

};


#endif //SPAN_HPP
