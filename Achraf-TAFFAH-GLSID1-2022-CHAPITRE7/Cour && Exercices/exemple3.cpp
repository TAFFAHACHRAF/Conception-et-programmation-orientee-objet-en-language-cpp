#include<iostream>
#include<point.h>
class pointcol : public point {
	short couleur;
	public:
		void colore(short cl){
			couleur=cl;
		}
		void affichec();
		void initialisec(int,int,short);
};
	void pointcol::affiche(){
		affiche();
		cout << "Couleur : " << couleur << "\n";
	}
	void pointcol::initialisec(int abs,int ord,int cl){
		initialise(abs,ord);
		couleur=cl;
	}
	
