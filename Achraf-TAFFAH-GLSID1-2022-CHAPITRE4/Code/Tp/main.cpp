#include <iostream>
using namespace std;
#include "tp4.cpp"

int main(){
    int nbr_eleves;
    cout <<"Nombre etudients: ";
    cin >> nbr_eleves;
    Note * notes = new Note[nbr_eleves];
    
    for(int i=0;i<nbr_eleves;i++){
      cout << "Etudiant " <<i+1<<endl;
      (notes+i)->input();
    }
    
    Appreciation(notes,nbr_eleves);
    cout << Moyenne(notes,nbr_eleves)<<endl;
	    for(int i=0;i<nbr_eleves;i++){
	      if((notes+i)->get()<15) Harmonise(*(notes+i));
    }
    
    cout << Moyenne(notes,nbr_eleves)<<endl;
  return 0;
}
