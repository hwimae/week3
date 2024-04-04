#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

struct Rect {
    int x;
    int y;
    int w;
    int h;

    bool contains(const Point& p) const {
        return (p.x >= x && p.x <= x + w && p.y >= y && p.y <= y + h);
    }
};

int main()
{
    Rect rect;
    cin >> rect.x >> rect.y >> rect.w >> rect.h;
    Point p;
    cin >> p.x >> p.y;
    if(rect.contains(p)) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}
