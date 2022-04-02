#include<iostream>
#include<conio.h>
using namespace std;
struct complexe{
	double reel,im;
};
void affiche(int);
void affiche(double);
void affiche(complexe);
int main(){
	int a=5;
	double b=0.0; //error nome variable d
	complexe c={1.0,-1.0};
	affiche(a); //Appel la fonction (1)
	affiche(b); //Appel la fonction (2)
	affiche(c); // Appel la fonction (3)
}
void affiche(int i){
	cout << "Type de variable (int) :" << endl;
	cout << "Valeur : " << i << endl;
}
void affiche(double d){
	cout << "Type de variable (double) :" << endl;
	cout << "Valeur : "<< d << endl;
}
void affiche(complexe c){
	cout << "Type de variable (complexe) :"<< endl;
	cout << "Valeur : " << c.reel << endl;
	cout << "Valeur : " << c.im << endl;
}
