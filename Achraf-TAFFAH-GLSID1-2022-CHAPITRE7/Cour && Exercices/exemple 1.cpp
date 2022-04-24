#include<iostream>
#include<conio.h>
class point{
	int x,y;
	public:
		void initialise(int abs,int ord){
			x=abs;
			y=ord;
		}
		void deplace(int dx,int dy){
			x=x+dx;
			y=y+dy;
		}
		void affiche(){
			cout << "Le point en " << x << " " << y << "\n";
		}
};
class poincol: public point{
	short couleur;
	public:
		void colore(short c){
			couleur=c;
		}
};
