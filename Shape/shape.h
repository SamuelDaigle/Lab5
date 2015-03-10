#pragma once
#include "stdafx.h"

#include <vector>

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		virtual void add(Point _point);
		virtual Point getPoint(unsigned int _index);

	protected:
		IWindowAPI* windowAPI;
		Color* fillColor;
		Color* lineColor;
		vector<Point> pointArray;
	};
}
