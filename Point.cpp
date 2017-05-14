#include "Point.h"
#include "math.h"

Point::Point()
{
    //ctor
}

Point::Point(int X, int Y)
{
    this->x = X;
    this->y = Y;
}

Point::~Point()
{
    //dtor
}

void Point::setX(int X)
{
    this->x = X;
}

void Point::setY(int Y)
{
    this->y = Y;
}

int Point::getX()
{
    return this->x;
}

int Point::getY()
{
    return this->y;
}

double Point::getDistance(Point a)
{
    return sqrt(pow(a.getX() - this->getX(), 2) + pow(a.getY() - this->getY(), 2));
}
