#include<iostream>
#include<conio.h>
using namespace std;
class point{
	int x,y;
	public:
		point(int,int);
		point(point &); /*constructeur par recopie*/
		point symetrique();
		void affiche(){ cout<<"x="<<x<<" y="<<y<<"\n"; }
		~point();
};
	point::point(int abs,int ord=0){
		x=abs;
		y=ord;
		cout<<"Construction du point "<<x<<" "<<y;
		cout<<" d'adresse "<<this<<"\n";
	}
	point::point(point &pt){
		x=pt.x;y=pt.y;
		cout<<"Construction par recopie du point "<<x<<" "<<y;
		cout<<" d'adresse "<<this<<"\n";
	}
	point point::symetrique(){
		point res(0,0);
		cout<<"**********************************************\n";
		res.x=-x;
		res.y=-y;
		cout<<"#################################################\n";
		return res;
	}	
	point::~point(){
		cout<<"Destruction du point "<<x<<" "<<y;
		cout<< "d'adresse "<<this<<"\n";
	}
	int main(void){
		cout<<"Debut de main() \n";
		point a(1,4),b(0,0);
		cout<<"Avant appel a symetrique\n";
		b=a.symetrique();
		b.affiche();
		cout<<"Apres appel a symetrique et fin de main() \n";
		getch();
		return 0;
	}
		
