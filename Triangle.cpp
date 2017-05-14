#include "Triangle.h"
#include "math.h"
#include <iostream>
Triangle::Triangle()
{
    //ctor
}

Triangle::Triangle(Point a, Point b, Point c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

Triangle::~Triangle()
{
    //dtor
}

void Triangle::setPoints(Point a, Point b, Point c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

double Triangle::getArea()
{
    double p;
    p = ((this->a.getDistance(this->b)+this->b.getDistance(this->c)+this->c.getDistance(this->a))/2);
    if (((a.getX()==b.getX())&&(b.getX()==c.getX()))&&((a.getY()==b.getY())&&(b.getY()==c.getY()))){
        return -1;
    } else if ((b.getY()*c.getY()-b.getY()*a.getX()-a.getY()*c.getX())==(c.getY()*b.getX()-c.getY()*a.getX()-a.getY()*b.getX())){
        return -2;
    } else {
        return sqrt(p*(p-this->a.getDistance(this->b))*(p-this->b.getDistance(this->c))*(p-this->c.getDistance(this->a)));
    }
}

void Triangle::printPointsPosition()
{
    std::cout << "a(" << a.getX() << ";" << a.getY() << ") b(" << b.getX() << ";" << b.getY() << ") c(" << c.getX() << ";" << c.getY() << ")" << std::endl;
}
