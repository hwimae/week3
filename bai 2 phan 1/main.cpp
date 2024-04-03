#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

void printByValue(Point p) {
    cout << "Truyền tham trị: (" << p.x << ", " << p.y << ")" << endl;
    p.x = 0;
    p.y = 0;


void printByReference(Point &p) {
    cout << "Truyền tham biến: (" << p.x << ", " << p.y << ")" << endl;
    p.x = 0;
    p.y = 0;
}

int main() {
    Point point;
    point.x = 10;
    point.y = 12;


    cout << "printByValue:" << endl;
    printByValue(point);
    cout << "point = (" << point.x << ", " << point.y << ")" << endl;

    cout << "printByReference:" << endl;
    printByReference(point);
    cout << "point = (" << point.x << ", " << point.y << ")" << endl;

    return 0;
}
