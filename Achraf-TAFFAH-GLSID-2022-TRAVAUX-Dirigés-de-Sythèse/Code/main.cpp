#include <iostream>
#include "employe.hpp"
#include "adherent.hpp"

using namespace std;

int main(){
  Employe * employe_1 = new Employe(473674,21,"TAFFAH",20000.00),
          * employe_2 = new Adherent(130477607,28,"ANAS",1505,"2023/18/4",15794);
  cout << "Affichage des Employee "<< endl;
  cout << employe_1->ToString() <<endl;
  cout << employe_2->ToString() <<endl;
  cout << "Salaire de TAFFAH apres reducation: "<< employe_2->GetSalaire() << endl;
  cout << "Montant de participation d'adherent TAFFAH: " <<((Adherent *)employe_2)->GetMontant() << endl;
  cout << "Changer le montant de participation d'adherent TAFFAH par 3500"<< endl;
  ((Adherent *)employe_2)->SetMontant(3500);
  cout << "Nouveau montant de participation d'adherent TAFFAH: " << ((Adherent *)employe_2)->GetMontant() << endl;
  cout << "Nouveau salaire de TAFFAH apres reducation: "<< employe_2->GetSalaire() << endl;
  return 0;
}
