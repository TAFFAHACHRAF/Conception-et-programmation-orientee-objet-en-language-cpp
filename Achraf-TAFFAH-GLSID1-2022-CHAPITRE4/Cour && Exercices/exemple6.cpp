#include<iostream>
#include<conio.h>
#include<dos.h>
using namespace std;
class point{
	int x,y;
	public: point(int,int);
	~point();
};
point::point(int abs,int ord){
	x=abs;
	y=ord;
	cout<<"Construction du point "<<x<<" "<<y;
	cout<<" Son adresse : "<<this<<"\n";
}
point::~point(){
	cout<<"Destruction du point "<<x<<" "<<y<<" Son adresse : "<<this<<"\n";
}
int main(void){
	cout<<"Debut de main() \n";
	point a(3,7);
	point b=a;
	cout<<"Fin de main() \n";
	getch();
	return 0;
}
