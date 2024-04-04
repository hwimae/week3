#include <iostream>
#include <string> // Include string library for using std::string

using namespace std;

struct Point {
    int x, y;
};

struct Rect {
    int x, y, w, h;
};

struct Ship {
    int dx, dy;
    string id;
    Rect bounds;
    void move() {
        bounds.x += dx;
        bounds.y += dy;
    }
};

void display(const Ship& ship) {
    cout  << ship.id << endl;
    cout  << ship.bounds.x << ", " << ship.bounds.y << endl;
}

int main() {
    Ship ship1;
    ship1.id = "Ship 1";
    ship1.bounds = {0, 0, 10, 5};
    ship1.dx = 2;
    ship1.dy = 2;

    Ship ship2;
    ship2.id = "Ship 2";
    ship2.bounds = {5, 5, 8, 4};
    ship2.dx = 1;
    ship2.dy = -1;

    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
    }

    return 0;
}
