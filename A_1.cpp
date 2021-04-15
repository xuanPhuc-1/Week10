#include<iostream>
using namespace std;
struct Point
{
    int x;
    int y;
}
point1, point2;

void print(Point target){
   cout << target.x;
   cout << " " << target.y << endl;

}
int main () {
    cin >> point1.x >> point1.y;
    print(point1);
    cin >> point2.x >> point2.y;
    print(point2);
    return 0;

}