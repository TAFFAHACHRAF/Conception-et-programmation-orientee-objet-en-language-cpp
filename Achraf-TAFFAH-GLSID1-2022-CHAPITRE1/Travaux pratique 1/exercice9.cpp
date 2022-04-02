#include<iostream>
#include<conio.h>
using namespace std;

struct essai{
	int n;
	float x;
};

void Remise_a_zero(struct essai* e){
	e->n=0;
	e->x=0;
}

void Remise_a_zero(struct essai &e){
	e.n=0;
	e.x=0;
}

void display(struct essai* e){
	cout << "la valeur de n est : " << e->n << "\nla valeur de x est : " << e->x <<endl;
}

int main(){
	//	:::::::::::::::::::Remise_a_zero par référence::::::::::::::::::::::::::
	cout << "Cas 1 :\nAvant la remise a zero"<<endl;
	essai *test = new essai;
	display(test);
	cout << "Apres la remise a zero"<<endl;
	Remise_a_zero(test);
	display(test);
//	:::::::::::::::::::Remise_a_zero par adresse::::::::::::::::::::::::::
	cout << "\nCas 2 :\nAvant la remise a zero"<<endl;
	essai *test2 = new essai;
	display(test2);
	cout << "Apres la remise a zero"<<endl;
	Remise_a_zero(*test);
	display(test);
	return 0;
}
