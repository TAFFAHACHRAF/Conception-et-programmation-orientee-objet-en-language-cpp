#include<iostream>
#include<conio.h>
using namespace std;
class liste{
	int taille;
	float *adr;
	public:
		liste(int);
		~liste();
};
liste::liste(int t){
	taille=t;
	adr=new float(taille);
	cout<<"Construction";
	cout<<" Adresse de l'objet:"<<this;
	cout<<" Adresse de liste:"<<adr<<"\n";
}
liste::~liste(){
	cout<<"Destruction Adresse de l'objet:"<<this;
	cout<<" Adresse de liste:"<<adr<<"\n";
	delete adr;
}
int main(void){
	cout<<"Debut de main() \n";
	liste a(3);
	liste b=a;
	cout<<"Fin de main() \n";
	getch();
	return 0;
}
