#pragma once
#include "stdafx.h"
#include "color.h"

namespace ShapeLibrary
{
	class Circle : public Shape
	{
	public:
		Circle(IWindowAPI& _windowAPI);

		void setCenter(Point& _center);
		void setRadius(int _radius);
		void setFillColor(Color::COLOR_TYPE _colorType);
		void setLineColor(Color::COLOR_TYPE _colorType);

		void draw();

	private:
		Point* center;
		int radius;
	};
}
