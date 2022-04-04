//
// Created by Grubbly Ernesto on 3/20/22.
//

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.h"

class	Point	{
private:
	const Fixed	x;
	const Fixed	y;

public:
	Point();
	Point(float const one, float const two);
	Point(Point const &src);
	virtual	~Point();
	const Point & operator = (Point const &src);

	Fixed const & getX()	const;
	Fixed const & getY()	const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //POINT_HPP
