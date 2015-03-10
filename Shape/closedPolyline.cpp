#include "stdafx.h"
#include "closedPolyline.h"

using namespace ShapeLibrary;

ClosedPolyline::ClosedPolyline(IWindowAPI& _windowAPI)
{
	windowAPI = &_windowAPI;
	fillColor = new Color();
	lineColor = new Color();
}