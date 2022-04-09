#include <iostream>

class Point
{
private:
    int x;
    int y;

public:
    Point(int abs = 0, int ord = 0) : x(abs), y(ord) {}
    Point &symmetric() const
    {
        static Point p(-x, -y);
        return p;
    }
    void afficher() const
    {
        std::cout << "(" << x << "," << y << ")" << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Point a, b(1, 6);
    a = b.symmetric();
    a.afficher();
    b.afficher();
    std::cin.get();
    return 0;
}
