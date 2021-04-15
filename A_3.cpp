#include<iostream>
using namespace std;
struct Point
{
    const double x;
    const double y;
}
;

void mid_point(double x1, double y1, double x2, double y2){
   cout << "middle point is (" << (x1+x2)/2 << ", " << (y1+y2)/2 << ")";

}
int main () {
    Point point1 = {2, 3};
    Point point2 = {4, 5};
    mid_point(point1.x, point1.y, point2.x, point2.y);
    return 0;

}