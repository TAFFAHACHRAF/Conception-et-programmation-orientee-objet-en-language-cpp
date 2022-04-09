#include <iostream>
class Vector{
private:
    float x, y;
public:
    Vector(float, float); void homothetie(float); Vector homothetie(float) const; void afficher() const; float determinant(Vector) const; float determinantAdresse(Vector *) const;
    float determinantRef(Vector &) const; float produit_scalaire(Vector) const; Vector somme(Vector) const;
};
Vector::Vector(float abs = 0, float ord = 0) : x(abs), y(ord) {}
void Vector::homothetie(float facteur){
    x *= facteur;
    y *= facteur;
}
// Par valeur
Vector Vector::homothetie(float facteur) const{
    Vector v(x * facteur, y * facteur);
    return v;
}
void Vector::afficher() const{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}
float Vector::determinant(Vector v) const{
    return x * v.y - y * v.x;
}
float Vector::determinantAdresse(Vector *v) const{
    return x * v->y - y * v->x;
}
float Vector::determinantRef(Vector &v) const{
    return x * v.y - y * v.x;
}
float Vector::produit_scalaire(Vector v) const{
    return x * v.x + y * v.y;
}
Vector Vector::somme(Vector v) const{
    return Vector(x + v.x, y + v.y);
}
