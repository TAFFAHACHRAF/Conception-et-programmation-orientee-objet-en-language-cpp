#include<iostream>
#include<conio.h>
using namespace std;
class point{
	int x,y;
	public:
		point(int,int);
		~point();
};
point::point(int abs,int ord){
	x=abs;
	y=ord;
	cout<<"Construction du point "<<x<<"\n";
}
point::~point(){
	cout<<"Destruction du point "<<x<<" "<<y<<"\n";
}
void test(){
	cout<<"Debut de main() \n";
	static point u(3,7);
	cout<<"Fin de test() \n";
}
int main(void){
	cout<<"Debut de main() \n";
	point a(1,4);
	test();
	point b(5,10);
	cout<<"Fin de main()\n";
	getch();
	return 0;
}
