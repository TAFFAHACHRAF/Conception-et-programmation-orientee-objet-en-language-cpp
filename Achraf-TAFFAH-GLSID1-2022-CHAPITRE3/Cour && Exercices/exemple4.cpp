#include <iostream>
class Point{
private:
    int x;
    int y;
public:
    Point(int abs = 0, int ord = 0) { x = abs;  y = ord; }
    int coincide(Point) const;
    int coincideAdresse(Point *) const;
    int coincideRef(Point &) const;
};

int Point::coincide(Point p) const{
 if (x == p.x && y == p.y)
        return 1;
    else
        return 0;
}
int Point::coincideAdresse(Point *adpt) const {
    if (x == adpt->x && y == adpt->y)
        return 1;
    else
        return 0;}
int Point::coincideRef(Point &ref) const{
    if (x == ref.x && y == ref.y)
        return 1;
    else
        return 0;
}
int main(int argc, char const *argv[]) { 
	int test1, test2; Point p1, p2(1), p3(0, 0); 
	test1 = p1.coincide(p2); test2 = p2.coincide(p1); 
	std::cout << "p1 et p2 = " << test1 << " ou " << test2 << std::endl; test1 = p1.coincide(p3);
    test2 = p3.coincide(p1); std::cout << "p1 et p3 = " << test1 << " ou " << test2 << std::endl; std::cin.get(); 
	return 0; 
}
