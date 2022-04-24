#include<iostream>
#include<conio.h>
using namespace std;
class point {
	int x,y;
	public:
		point(int,int);
		~point();
};
point::point(int abs,int ord){
	x=abs;
	y=ord;
	cout<<"Construction du point "<<x<<" "<<y<< " & l'&dresse : " << this << "\n";
}
point::~point(){
	cout<<"Destruction du point "<<x<<" "<< y << "a l'adresse : " << this << "\n";
}
int main(void){
	cout<<"Debut de main () \n";
	point a(0,0);
	a=point(1,2);
	a=point(3,5);
	cout<<"Fin de main() \n";
	getch();
	return 0;
}
