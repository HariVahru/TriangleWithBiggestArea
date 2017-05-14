#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"

class Triangle
{
    public:
        Triangle();
        Triangle(Point a, Point b, Point c);
        ~Triangle();
        double getArea(); //If returns "-1" - all points have same place.
                          //If returns "-2" - all points placed on one line.
        void setPoints(Point a, Point b, Point c);
        void printPointsPosition();
    protected:

    private:
        Point a;
        Point b;
        Point c;
};

#endif // TRIANGLE_H
