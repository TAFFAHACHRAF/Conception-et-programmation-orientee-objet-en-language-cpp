#include<iostream>
#include<conio.h>
using namespace std;
void affiche(float,int);
void affiche(int,float);

int main(){
	affiche((float)7.8,2); affiche(7,(float)2.8);
	affiche((float)1.9,2); affiche(10,(float)1.8);	 
	affiche((float)6.7,7); affiche(2,(float)4.9);
	getch();
}

void affiche(float x,int n=0){
	if( (n == 0 ) || (x == 0 && n == 0))
		cout << "puissance("<<x<<","<<n<<") est :  1 " << endl;
	if(n>0){
		float pow_x_n=1;
		for(int i=1;i<=n;i++){
			pow_x_n=pow_x_n*x;
		}
		cout << "puissance("<<x<<","<<n<<") est :  " << pow_x_n << endl;
	}
}

void affiche(int n,float x=0){
	affiche(x,n);
}
