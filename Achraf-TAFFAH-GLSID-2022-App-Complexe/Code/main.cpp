#include "complexe.cpp"
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
  

  
  return 0;
}
