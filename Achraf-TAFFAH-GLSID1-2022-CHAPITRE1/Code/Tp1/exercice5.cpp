#include <iostream>
#include <conio.h>
using namespace std;
void test(int n=0,float x=2.5){
	cout <<"Fonction N1 : ";
	cout << "n= "<<n<<"  x="<<x<<"\n";
}
void test(float x=4.1,int n=2){
	cout <<"Fonction N2 : ";
	cout <<"n= "<<n<<" x="<<x<<"\n";
}
int main(){
	int i=5;float r=3.2;
	test(i,r);
	test(r,i);
	test(i);
	test(r);
//	les appels suivants, ambigues, sont rejetés par le compilateur
//	test()
//	test(i,i)
//	test(r,r)
//	les initialisations par défaut de x à la valeur 4.1
//	et de n à 0 sont inutilisables
	return 0;
	getch();
}
