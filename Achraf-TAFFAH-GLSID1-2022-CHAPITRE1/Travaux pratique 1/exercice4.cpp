#include <iostream>
#include <conio.h>
using namespace std;
float puissance(float x,int n=4){
	if( n == 0)
		return 1;
	if(n>0){
		float pow_x_n=1;
		for(int i=1;i<=n;i++){
			pow_x_n=pow_x_n*x;
		}
		return pow_x_n;
	}
	if(n<0){
		float pow_x_n_negative=1/puissance(x,-n);
		return pow_x_n_negative;
	}
}
void display(float value){
	cout << value << "\n" << endl;
}
int main(){
	float r1,r2,r3,r4,r5,r6,r7,r8;
//	clacule
	r1=puissance(2,2); r2=puissance(47,10); r3=puissance(9,66); r4=puissance(45,2.5);
	r5=puissance(7,10.2); r6=puissance(18,0); r7=puissance(2,-2); r8=puissance(-10,-1);
//	Affichage
	display(r1); display(r2); display(r3); display(r4); display(r5); display(r6); display(r7); display(r8);
	return 0;
	getch();
}
