#include <iostream>

class Point
{
private:
    int x, y;

public:
    Point(int abs = 0, int ord = 0) : x(abs), y(ord) {}
    void affiche(std::string = "Position du point") const;
};

void Point::affiche(std::string message) const
{
    std::cout << message << " (" << x << ", " << y << ")" << std::endl;
}

int main(int argc, char const *argv[])
{
    Point a, b(40);
    a.affiche();
    b.affiche("Position du point b: ");
    char text[10] = "Bonjour";
    Point c(3, 12);
    c.affiche(text);
    std::cin.get();
    return 0;
}
