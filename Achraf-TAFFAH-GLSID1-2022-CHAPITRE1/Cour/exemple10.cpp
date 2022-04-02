#include<iostream>
#include<conio.h>
using namespace std;
	
struct complexe{
	double reel,im;
};

int main(){
	complexe *z;
	z = new complexe[50];
	delete z; // ne libére que le premier élément
//	delete [50]z;
	//	ou
	delete []z;
	return 0;
}
