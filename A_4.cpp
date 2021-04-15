#include<iostream>
using namespace std;
struct Point
{
     double x;
     double y;
}
point1, point2
;

void address_point(){
   cout << "Address of point is " << &(point1.x) << " " << &(point1.y);

}
int main () {
    Point point1 = {1, 2};
    address_point();
    return 0;
// địa chỉ của các phần tử bên trong Point cách nhau 8 bit và 4 byte
}