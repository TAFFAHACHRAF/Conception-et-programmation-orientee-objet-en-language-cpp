#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
// Classe vecteur 
// Surdefinition de l'operateur + par une fonction AMIE
class vecteur{
	float x,y;
	public:
		vecteur(float,float);
		void affiche();
		friend vecteur operator+(vecteur,vecteur);
};
vecteur::vecteur(float abs=0,float ord=0){
	x=abs;
	y=ord;
}
void vecteur::affiche(){
	cout<<"x = "<<x<<" y = "<<y<<"\n";
}

vecteur operator+(vecteur v,vecteur w){
	vecteur res;
	res.x=v.x+w.x;
	res.y=v.y+w.y;
	return res;
}
int main(){
	vecteur a(2,6),b(4,8),c,d;
	c=a+b; c.affiche();
	d=a+b+c;d.affiche();
	getch();
	return 0;
}
