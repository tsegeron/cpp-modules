//
// Created by Grubbly Ernesto on 31/03/2022.
//

#include "Span.hpp"

Span::Span() {}

Span::~Span()
{
}

Span::Span(size_t size) : _N(size)
{
}

Span::Span(const Span &src)
	: _N(src._N), vec(src.vec)
{
}

Span & Span::operator = (const Span &src)
{
	this->_N = src._N;
	this->vec = src.vec;

	return *this;
}

void	Span::addNumber(int addMe)
{
	if (vec.size() < this->_N)
		vec.push_back(addMe);
	else
		throw Span::SpanIsAlreadyFull();
}

int		Span::shortestSpan()
{
	std::vector<int>	sorted(vec);
	int					minDiff;

	std::sort(sorted.begin(), sorted.end());
	if (vec.size() < 2)
		throw Span::NotEnoughSpans();
	minDiff = sorted[1] - sorted[0];
	for (size_t i = 0; i < sorted.size() - 1; i++)
		if (minDiff > sorted[i + 1] - sorted[i])
			minDiff = sorted[i + 1] - sorted[i];

	return (minDiff);
}

int		Span::longestSpan()
{
	if (vec.size() < 2)
		throw Span::NotEnoughSpans();
	return ((*std::max_element(vec.begin(), vec.end())) - (*std::min_element(vec.begin(), vec.end())));
}

const char *Span::SpanIsAlreadyFull::what() const throw()
{
	return "Span: Span is already full";
}

const char *Span::NotEnoughSpans::what() const throw()
{
	return "Span: Not enough spans for operation";
}
