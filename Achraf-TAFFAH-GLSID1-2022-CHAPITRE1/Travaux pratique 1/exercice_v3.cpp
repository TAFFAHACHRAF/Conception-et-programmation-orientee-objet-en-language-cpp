#include <iostream>
#include <conio.h>
void echange(int &a,int &b){
	int tampon;
	tampon = b; b=a;a=tampon;
	cout<<"Pendant l'�change: a = "<<a<<" b = "<<b<<"\n";
}
void main(){
	int u=5,v=3;
	cout<<"Avant �change: u = "<<u<<" v = "<<v<<"\n";
	echange(u,v);
	cout<<"Apr�s �change: u = "<<u<<" v = "<<v<<"\n";
	getch();
}
