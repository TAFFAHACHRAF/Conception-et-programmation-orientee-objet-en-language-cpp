#include <iostream>

class Point
{
private:
    int x;
    int y;
    std::string color;

public:
    void affiche() const;
};

void Point::affiche() const
{
    std::cout << "Point(" << x << ", " << y << ", " << color << ")" << std::endl;
}
