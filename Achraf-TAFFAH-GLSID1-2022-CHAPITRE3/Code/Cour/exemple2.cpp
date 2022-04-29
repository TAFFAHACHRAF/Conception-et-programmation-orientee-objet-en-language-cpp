#include <iostream>

class Point
{
private:
    int x;
    int y;

public:
    Point() { x = 0; y = 0; }
    Point(int abs) { x = abs; y = abs; }
    Point(int abs, int ord) { x = abs; y = ord; }
    void afficher() const;
};

void Point::afficher() const
{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}

int main(int argc, char const *argv[])
{
    Point p1, p2;
    p1.afficher();
    p2.afficher();
    Point p3(5, 6);
    p3.afficher();
    std::cin.get();
    return 0;
}
