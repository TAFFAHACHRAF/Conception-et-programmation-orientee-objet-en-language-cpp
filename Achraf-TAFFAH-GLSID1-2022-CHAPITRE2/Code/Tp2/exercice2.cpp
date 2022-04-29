//Exercice 2
#include <iostream>
using namespace std;
class Point{
    int x, y, couleur;
public:
    void initialiser(int, int, int);
    void deplacer(int, int);
    void afficher();
    void effacer();
};
void Point::initialiser(int abs, int ord, int c){
    x = abs;
    y = ord;
    couleur = c;
}
void Point::deplacer(int dx, int dy){
    effacer();
    x = x + dx;
    y = y + dy;
    afficher();
}
void Point::afficher(){
    cout << "je suis en " << x << " " << y << endl;
}
void Point::effacer(){
    int aux = couleur;
    couleur = 2; // black
    afficher();
    couleur = 1;
}
void scene(){
    Point u;
    u.initialiser(10, 30, 1);
    u.afficher();
    u.deplacer(20, 40);
    u.effacer();
}
int main(){
    scene();
    return 0;}
