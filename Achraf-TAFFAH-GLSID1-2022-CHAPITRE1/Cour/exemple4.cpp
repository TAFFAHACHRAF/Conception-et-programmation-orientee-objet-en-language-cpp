#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	char c='m' , d=25,e;
	int i=42,j;
	float r=678.9,s;
	j = c;
	cout << j << "\n"; // j  vaut 109
	j = r;
	cout << j << "\n"; // j vaut 678
	s = d;
	cout << s<<"\n"; // s vaut 25.0
	cout << s<<"\n"; // s vaut 25
	e = i;
	cout << e<<"\n"; // e vaut *
	getch();
} 


