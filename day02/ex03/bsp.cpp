//
// Created by Grubbly Ernesto on 3/20/22.
//

//#include "Fixed.h"
#include "Point.hpp"

static Fixed	square(Fixed ax, Fixed ay, Fixed bx, Fixed by, Fixed cx, Fixed cy)
{
	Fixed	sqNum;
	Fixed	Zero;

	sqNum = (bx * cy) - (cx * by) - (ax * cy) + (cx * ay) + (ax * by) - (bx * ay);
	if (sqNum < Zero)
		sqNum = Zero - sqNum;

	return sqNum;
}

static bool	checkBorders(Point const &a, Point const &b, Point const &c, Point const &point)
{
	Fixed	pointX = point.getX();
	Fixed	pointY = point.getX();

	if (pointX == a.getX() || pointX == b.getX() || pointX == c.getX() ||
			pointY == a.getY() || pointY == b.getY() || pointY == c.getY())
		return true;
	return false;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (checkBorders(a, b, c, point))
		return false;

	Fixed	Sum;
	Fixed	Res;
	Fixed	Dot(0.01f);
	Fixed	Zero;

	Sum = square(point.getX(), point.getY(), a.getX(), a.getY(), b.getX(), b.getY()) +
			square(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY()) +
			square(point.getX(), point.getY(), c.getX(), c.getY(), a.getX(), a.getY());

	Res = square(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY()) - Sum;
	if (Res < Zero)
		Res = Zero - Res;

	if (Res < Dot)
		return true;

	return false;
}
