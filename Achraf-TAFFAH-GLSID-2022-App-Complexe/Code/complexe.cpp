#include "complexe.hpp"

int main(){

  complexe a(2,4);
  complexe b(5,-10);
  cout <<"Printing a : "<< a << endl;
  cout << "Expected ->  2 + 4 i"<<endl;
  cout <<"Printing b : "<< b << endl;
  cout << "Expected ->  5 - 10 i"<<endl;
  complexe c = a + b;
  cout <<"c = a + b" << endl;
  cout <<"Printing c : "<< c << endl;
  cout << "Expected ->  7 - 6 i"<<endl;
  complexe h = a - b;
  cout <<"h = a - b" << endl;
  cout <<"Printing h : "<< h << endl;
  cout << "Expected ->  -3 + 14 i"<<endl;
  complexe j = a * b;
  cout <<"j = a * b" << endl;
  cout <<"Printing j : "<< j << endl;
  cout << "Expected ->  10 - 40 i"<<endl;
  complexe k = a / b;
  cout <<"k = a / b" << endl;
  cout <<"Printing k : "<< k << endl;
  cout << "Expected ->  0.4 - 0.4 i"<<endl;
  complexe l = -a;
  cout <<"l = -a" << endl;
  cout <<"Printing l : "<< l << endl;
  cout << "Expected ->  -2 - 4 i"<<endl;
  cout <<"a == b     ? "<< (a==b ? "true":"false") << endl;
  cout <<"k == (a/b) ? "<< (k==(a/b) ? "true":"false") << endl;
  complexe v = a.polar(5,45);
  cout <<"v = a.polar( 5 , 45 )" << endl;
  cout <<"Printing v : "<< v << endl;
  
  return 0;
}
