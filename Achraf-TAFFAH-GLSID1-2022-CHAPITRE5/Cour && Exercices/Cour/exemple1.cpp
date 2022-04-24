#include<iostream>
#include<conio.h>
using namespace std;
class vecteur{
	float x,y;
	public:
		vecteur(float,float);
		void affiche();
		vecteur operator + (vecteur); // surdefinition de l'opperateur somme
									// On passe un paramétre vecteur
									// La fonction retourne un vecteur
};
vecteur::vecteur(float abs=0,float ord=0){
	x=abs;
	y=ord;
}
void vecteur::affiche(){
	cout<<"x = "<<x<<" y = "<<y<<"\n";
}
vecteur vecteur::operator+(vecteur v){
	vecteur res;
	res.x=v.x+x;
	res.y=v.y+y;
	return res;
}
int main(){
	vecteur a(2,6),b(4,8),c,d,e,f;
	c=a+b;
	c.affiche();
	e=b.operator +(c);
	e.affiche();
	getch();
	return 0;
}
