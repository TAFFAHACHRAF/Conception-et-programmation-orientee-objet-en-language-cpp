#include"liste.hpp"
#include<iostream>
#include<conio.h>
using namespace std;
liste::liste(int t){
	taille=t;
	adr=new float(taille);
	cout<<"Construction";
	cout<<" Adresse de l'objet:"<<this;
	cout<<" Adresse de liste:"<<adr<<"\n";
}
liste::~liste(){
	cout<<"Destruction Adresse de l'objet:"<<this;
	cout<<" Adresse de liste:"<<adr<<"\n";
	delete adr;
}
liste::liste(const liste& v){
	taille=v.taille;
	adr=new float[taille];
	for(int i=0;i<taille;i++){
		adr[i]=v.adr[i];
	}
	cout<<"\nConstructeur par recopie";
	cout<<" Adresse de l'objet:"<<this;
	cout<<" Adresse de liste:"<<adr<<"\n";
}
void liste::saisie(){
	int i;
	for(i=0;i<taille;i++){
		cout<<"Entrer un nombre:";
		cin>>*(adr+i);
	}
}
void liste::affiche(){
	int i;
	cout<<"Adresse:"<<this<<" ";
	for(i=0;i<taille;i++)
		cout<<*(adr+i)<<" ";
	cout<<"\n\n";
}
void liste::operator=(liste &lis){	// passage par reference pour
	int i;		// Eviter l'appel au constructeur pa recopie
	taille=lis.taille;	// Et la double liberation d'un meme emplacement memoire
	delete adr;
	adr=new float[taille];
	for(i=0;i<taille;i++)
		adr[i]=lis.adr[i];
}
int main(){
	cout<<"Debut de main ()\n";
	liste a(5);
	liste b(2);
	a.saisie();
	a.affiche();
	b=a;
	b.affiche();
	a.affiche();
	cout<<"Fin de main() \n";
	return 0;
}
