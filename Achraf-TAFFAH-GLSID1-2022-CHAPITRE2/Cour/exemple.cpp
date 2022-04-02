#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
class Compteur{
    static int ctr;
public:
    Compteur();
    ~Compteur();
};
int Compteur ::ctr = 0;
Compteur ::Compteur(){
    cout << " un nouvel objet vient de sa creer " << endl;
    cout << " il y a maintenant : " << ++ctr << " objets ";
}
Compteur ::~Compteur(){
    cout << " un objet vient de se detruire " << endl;
    cout << " il reste maintenant  : " << --ctr << " objets ";
}
void essai(){
    Compteur u, v;
}
int main(){
    essai();
    Compteur a;
    essai();
    Compteur b;
    return 0;
}
