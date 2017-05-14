#include <iostream>
#include "Point.h"
#include "Triangle.h"
using namespace std;

const int POINTS_COUNT = 6; //Must be at least 3!

int main()
{
    Point * SixPoints;
    int x, y;

    cout << "This program finds triangle with" << endl << "biggest area within " << POINTS_COUNT << " points" << endl;
    cout << "================================" << endl;
    SixPoints = new Point[POINTS_COUNT];
    for (int i = 0; i<POINTS_COUNT; ++i){
        cout << "Input " << i+1 << " point X and Y: ";
        cin >> x >> y;
        SixPoints[i].setX(x);
        SixPoints[i].setY(y);
    }

    Triangle MaxTiangle(SixPoints[0], SixPoints[1], SixPoints[2]);
    Triangle TempTriangle;

    for (int i = 0; i< POINTS_COUNT-2; ++i)
    {
        for (int j = i+1; j < POINTS_COUNT-1; ++j)
        {
            for (int l = j+1; l < POINTS_COUNT; ++l)
            {
                TempTriangle.setPoints(SixPoints[i], SixPoints[j], SixPoints[l]);
                if (TempTriangle.getArea() > MaxTiangle.getArea()){
                    MaxTiangle.setPoints(SixPoints[i], SixPoints[j], SixPoints[l]);
                }
            }
        }
    }

    cout << "================================" << endl;

    if (MaxTiangle.getArea() == -2)
    {
        cout << "Unable to calculate area, because all points" << endl << " placed on the same line." << endl;
    }
    else if (MaxTiangle.getArea() == -1)
    {
        cout << "Unable to calculate area, because all points" << endl << " have same place." << endl;
    }
    else
    {
        cout << "Triangle with biggest area is:" << endl;
        MaxTiangle.printPointsPosition();
        cout << "With area of " << MaxTiangle.getArea();
    }

    delete SixPoints;
    return 0;
}
