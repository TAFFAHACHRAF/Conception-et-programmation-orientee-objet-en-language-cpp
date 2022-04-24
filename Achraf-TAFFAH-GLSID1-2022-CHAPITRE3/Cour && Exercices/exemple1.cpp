#include <iostream>

class Point
{
private:
    int x;
    int y;

public:
    Point();
    Point(int);
    Point(int, int);
    void afficher() const;
    void afficher(std::string) const;
};
Point::Point(){
    x = 0; y = 0;
}
Point::Point(int abs){
    x = abs; y = abs;
}
Point::Point(int abs, int ord){
    x = abs; y = ord;
}
void Point::afficher() const{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}
void Point::afficher(std::string message) const{
    std::cout << message; this->afficher();
}
int main(int argc, char const *argv[]){
    Point p1; p1.afficher();
    Point p2(5); p2.afficher("p2 : ");
    Point p3(5, 6); p3.afficher("p3 : "); std::cin.get(); return 0;
}
