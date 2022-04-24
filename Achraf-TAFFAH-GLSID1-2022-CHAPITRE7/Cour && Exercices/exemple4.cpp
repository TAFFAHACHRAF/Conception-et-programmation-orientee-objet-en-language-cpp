#include<iostream>
#include<point.h>
class pointcol : public point{
	short couleur;
	public:
		void colore(short cl){
			couleur=cl;
		}
		void affiche();
		void initialise(int,int,short);
};
void pointcol::affiche(){
	point::affiche();
	cout << "Couleur : "<< couleur << "\n";
}
void pointcol :: initialise(int abs,int ord,int cl){
	point::initialise(abs,ord);
	couleur=cl;
}
main(){
	pointcol p;
	p.initialise(10,20,5);
	p.affiche();
	p.point :: affiche();
	p.deplace(2,4);
	p.affich();
	p.colore(2);
	p.affiche();
}
