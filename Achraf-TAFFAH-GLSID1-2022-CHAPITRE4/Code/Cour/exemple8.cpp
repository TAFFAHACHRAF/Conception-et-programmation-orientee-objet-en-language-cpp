#include<iostream>
#include<conio.h>
using namespace std;
class liste{
	int taille;
	float *adr;
	public:
		liste(int);
		liste(liste &);
		~liste();
};
liste::liste(int t){
	taille=t;adr=new float(taille);
	cout<<"\nConstruction";
	cout<<" Adresse de l'objet:"<<this;
	cout<<" Adresse de liste:"<<adr<<"\n";
}
liste::liste(liste &v){
	taille=v.taille;
	adr=new float(taille);
	for(int i=0;i<taille;i++)
		adr[i]=v.adr[i];
	cout<<"\n Constructeur par recopie";
	cout<<" Adresse de l'objet:"<<this;
	cout<<" Adresse de liste:"<<adr<<"\n";
}
liste::~liste(){
	cout<<"\nDestruction Adresse de l'objet:"<<this;
	cout<<" Adresse de liste:"<<adr<<"\n";
	delete adr;
}
int main(void){
	cout<<"Debut de main() \n";
	liste a(3);
	liste b=a;
	cout<<"\n Fin de main() \n";
	getch();
	return 0;
}
