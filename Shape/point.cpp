#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;


Point::Point( double _x, double _y ) :
	x(_x), 
	y(_y)
{	
	if (_x < 0) throw invalid_argument("x < 0");
	if (_y < 0) throw invalid_argument("y < 0");
	
}

bool Point::operator == (const Point & point) const
{
	if (point.x == x && point.y == y)
	{
		return true;
	}
	return false;
}

bool Point::operator != (const Point & point) const
{
	return !(point == *this); 
}
