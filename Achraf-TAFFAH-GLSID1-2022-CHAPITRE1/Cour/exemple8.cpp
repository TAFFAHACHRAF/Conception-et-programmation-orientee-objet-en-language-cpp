#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int *ptr1,*ptr2,*ptr3;
	// Allocation dynamique d'un entier
	ptr1 = new int;
	
	// Allocation d'un tableau de 10 entiers
	ptr2 = new int [10];
	
	// Allocation d'un entier avec initialisation
	ptr3 = new int(10);
	
	struct date {
		int jour,mois,an;
	};
	date *ptr4, *ptr5, *ptr6, d = {25, 4, 1952};
	
	// Allocation dynamique d'une structure
	ptr4 = new date;
	
	// Allocation dynamique d'un tableau d'un tableau de structure
	ptr5 = new date[10];
	
	// Allocation dynamique d'une structure avec initialisation
	ptr6 = new date(d);
	return 0;
}

