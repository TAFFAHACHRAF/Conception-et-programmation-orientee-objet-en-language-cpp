#include<iostream>
#include<point.h>
class pointcol : public point {
	short couleur;
	public:
		void colore(short c){
			couleur=c;
		}
};
main(){
	pointcol p;
	p.initialise(10,20);
	p.colore(5);
	p.affiche();
	p.deplace(2,4);
	p.affiche(); 
}
