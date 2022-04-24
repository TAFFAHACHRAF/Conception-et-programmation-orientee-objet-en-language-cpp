#include<iostream>
#include<conio.h>
class point{
	int x,y;
	public:
		point(int abs=0,int org=0){
			cout<<"++const.point:"<<abs<<" "<<ord<<"\n";
			x=abs;
			y=ord;
		}
		~point(){
			cout<<"--Destr.point:"<< x << " "<<y<<"\n";
		}
};
class pointcol:public point{
	short couleur;
	public:
		pointcol(int,int,short);
		~point(){
			cout<<"--dest.pointcol couleur:"<< couleur << "\n";
		}
};
pointcol::point(int abs=0,int org=0,short cl=1) :point(abs,ord){	
	cout<<"++const.point:"<< abs<<" "<<ord<<" "<<cl<<"\n";
	couleur=cl;
}
main(){
	pointcol a(10,15,3);
	pointcol(2,3);
	pointcol c(12);
	pointcol d;
	pointcol * adr;
	adr=new pointcol(12,25);
	delete adr;
}
