#include "stdafx.h"

using namespace ShapeLibrary;

void Shape::add(Point _point)
{
	pointArray.push_back(_point);
}

Point Shape::getPoint(unsigned int _index)
{
	return pointArray.at(_index);
}
