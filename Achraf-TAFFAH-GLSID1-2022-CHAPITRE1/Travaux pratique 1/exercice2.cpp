#include <iostream> //il faut utilisé iostream au lieux de iostream.h
#include <conio.h>
using namespace std;
int main(){
	int i,n=25, *p;
	char *CH="On est à l'IGA !"; //Deprecated conversion from string to 'char*'
	float x=25.359;
	
	cout<<"Bonjour\n";
	cout<<CH<<"\n";
	cout<<"BONJOUR\n"<<CH<<"\n";
	cout<<"n= "<< n <<" x= "<< x << " p= " << p << "\n";
	getch();
}
