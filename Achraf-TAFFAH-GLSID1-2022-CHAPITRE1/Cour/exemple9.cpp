#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int *pi = new int; // il faut allou� avant de desalou�
	delete pi; // desalloue la zone adress�e par pi
			   // pi existe encore mais pas pi*
	char *pc = new char[100];
	
	delete pc;  // desalloue la zone de 100 caract�res
//	delete [100]pc; // instruction �quivalente
	return 0;
}
