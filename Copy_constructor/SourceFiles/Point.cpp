#include "Point.h"

Point::Point(int x)
{ 
	this->x = x; 
}
Point::Point(const Point& p) 
{
	x = p.x; 
}
int Point::getX() 
{ 
	return x; 
}
