#include <iostream>

using namespace std;

struct Point{
    int x, y;
};

struct Rect{
    int x, y, w, h;
};

struct Ship{
    int dx, dy;
    string id;
    Rect bounds;
    void move(){
        bounds.x += dx;
        bounds.y += dy;
    }
};
    void display(const Ship& ship){
        cout << ship.id << endl;
        cout << ship.bounds.x << " " << ship.bounds.y;
    }


int main()
{
    Ship myShip;
    myShip.id = "12";
    myShip.bounds = {0, 0, 10, 5};
    myShip.dx = 2;
    myShip.dy = 2;
    myShip.move();
    display(myShip);
}
