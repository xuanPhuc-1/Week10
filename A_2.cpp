#include <iostream>
using namespace std;
struct Point
{
	double x, y;
	void print(struct Point)
	{
		cout << "Địa chỉ ban đầu của tọa tộ point1 " << &x << " " << &y << endl;
	}
};
void check(struct Point c)
{
	cout << &c.x << " " << &c.y << endl;
}
void check(struct Point* c)
{
	cout << "Dia chi con tro dang tro vao 2 toa do " << &c->x << " " << &c->y << endl;
}
int main()
{
	Point Point1 = {1, 2};
	cout << endl;
	check(Point1);
	cout << &Point1.x << " " << &Point1.y << endl;
	check(&Point1);
	return 0;
}