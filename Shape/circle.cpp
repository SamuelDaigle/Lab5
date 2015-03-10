#include "stdafx.h"
#include "circle.h"

using namespace ShapeLibrary;

Circle::Circle(IWindowAPI& _windowAPI)
{
	center = NULL;
	radius = 1;
	windowAPI = &_windowAPI;
	fillColor = new Color();
	lineColor = new Color();
}

void Circle::setCenter(Point& _center)
{
	center = &_center;
}

void Circle::setRadius(int _radius)
{
	if (_radius < 0) throw invalid_argument("invalid radius: must be positive.");
	radius = _radius;
}

void Circle::setFillColor(Color::COLOR_TYPE _colorType)
{
	delete fillColor;
	fillColor = new Color(_colorType);
}

void Circle::setLineColor(Color::COLOR_TYPE _colorType)
{
	delete lineColor;
	lineColor = new Color(_colorType);
}

void Circle::draw()
{
	if (center == NULL) throw runtime_error("circle's center must be initialized");
	windowAPI->setDrawingColor(*fillColor);
	windowAPI->drawCircle(*center, radius);
	windowAPI->fillCircle(*center, radius);
}