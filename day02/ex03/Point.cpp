//
// Created by Grubbly Ernesto on 3/20/22.
//

#include "Point.hpp"

Point::Point() : x(Fixed()), y(Fixed())
{
}

Point::Point(const float one, const float two) : x(Fixed(one)), y(Fixed(two))
{
}

Point::Point(Point const &src) : x(src.getX()), y(src.getY())
{
}

const Point & Point::operator = (Point const &src)
{
	return (src);
}

Point::~Point()
{
}

// --------------------------------------------------------------------------------

const Fixed & Point::getX()	const
{
	return this->x;
}

const Fixed & Point::getY()	const
{
	return this->y;
}
