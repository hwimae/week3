#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

Point mid_point(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

int main()
{
    Point p1, p2;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;
    Point mid = mid_point(p1, p2);
    cout << mid.x << " " << mid.y;
}
