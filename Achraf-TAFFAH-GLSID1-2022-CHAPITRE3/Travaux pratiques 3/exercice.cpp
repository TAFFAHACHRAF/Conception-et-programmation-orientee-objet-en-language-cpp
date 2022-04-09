#include <iostream>

class Point
{
private:
    int x;
    int y;

public:
    Point(int abs = 0, int ord = 0) : x(abs), y(ord) {}
    void affiche() const;
    int coincide(Point *) const;
};

void Point::affiche() const
{
    std::cout << "Adresse: " << this << " - Point(" << x << ", " << y << ")" << std::endl;
}

int Point::coincide(Point *p) const
{
    return (this->x == p->x && this->y == p->y);
}

int main(int argc, char const *argv[])
{
    Point a(5), b(3, 15);
    a.affiche();
    b.affiche();
    std::cin.get();
    return 0;
}
