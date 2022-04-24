#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int *pi = new int; // il faut alloué avant de desaloué
	delete pi; // desalloue la zone adressée par pi
			   // pi existe encore mais pas pi*
	char *pc = new char[100];
	
	delete pc;  // desalloue la zone de 100 caractères
//	delete [100]pc; // instruction équivalente
	return 0;
}
