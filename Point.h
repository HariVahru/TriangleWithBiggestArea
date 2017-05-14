#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(int X, int Y);
        ~Point();
        int getX();
        int getY();
        void setX(int X);
        void setY(int Y);
        double getDistance(Point a);
    protected:

    private:
        int x;
        int y;
};

#endif // POINT_H
