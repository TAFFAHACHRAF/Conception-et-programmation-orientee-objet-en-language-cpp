#include <iostream>
#include <conio.h>
#include <math.h>
#include<string>
using namespace std;
#include"classes.cpp"

int main(){
  cercle c1(14,0,19,1001);
  c1.affiche();
  c1.deplacer(5,4);
  c1.affiche();
  getch();
  
  triangle t(17,97,4,897,50,60,4);
  t.affiche();
  t.deplacer(9,-4);
  t.affiche();
  getch();
  
  return 0;
}
