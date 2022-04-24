#include<iostream>
#include<conio.h>
using namespace std;

void essai(float x,char c,int n=0){
	cout <<"Fonction N1: x = " << x <<" c = " << c <<" n = " << n << "\n";
}

void essai(float x,int n){
	cout <<"Fonction N2 : x = "<< x <<" n = "<< n <<"\n";
}

int main(){
	char l='z';
	int u=4;
	float y = 2.0;
	essai(y,l,u); /* fonction N1 */
	essai(y,l);   /* fonction N1 */
	essai(y,u);   /* fonction N2 */
	essai(u,u);   /* fonction N2 */
	essai(u,l);   /* fonction N1 */
//	essai(y,y);   /* rejet par le compilateur */
	essai(y,y,u); /* fonction N1 */
	getch();
}
