#include<iostream>
#include<conio.h>
using namespace std;
class point{
	int x,y;
	public:
		point(int abs,int ord){
			cout<<"++Const.point:" << "\n";
			x=abs;
			y=ord;
		}
		~point(){
			cout<<"--Destr.point:" << "\n";
		}
		void affiche(){
			cout<<"Coordonnées : "<<x<< " "<< y << "\n";
		}
};
class coul{
	short couleur;
	public:
		coul(short cl){
			cout<<"++Const.coul:"<< "\n";
			couleur=cl;
		}
		~coul(){
			cout<<"--Destr.coul:"<<"\n";
		}
		void affiche(){
			cout<<"Couleur : "<< couleur << "\n";
		}
};

class pointcol :public point,coul{
	public:
		pointcol(int,int,short);
		~pointcol(){
			cout<<"--Destr.pointcol"<<"`\n";
		}
		void affiche(){
			point::affiche();
			coul::affiche();
		}
};
pointcol ::pointcol(int abs,int ord,short cl) :point(abs,ord),coul(cl){
	cout<<"++Const.pointcool"<<"\n";
}
int main(){
	pointcol p(3,9,2);
	cout << "----------------------\n";
	p.affiche();
	cout << "----------------------\n";
	p.pointcol::affiche();
	cout << "----------------------\n";
	return 0;
}
