#ifndef _ADHERENT_
	#define _ADHERENT_
	#include <iostream>
	#include <string>
	#include <sstream>
	#include "employe.hpp"
	
	class Adherent:public Employe{
	  string DateAdherence;
	  float Montant;
	public:
	  Adherent();
	  Adherent(int,int,string,float,string,float);
	  float GetMontant() const;
	  void SetMontant(float);
	  float GetSalaire() const;
	  void AfficherS();
	  string ToString();
	};
	Adherent::Adherent():Employe(),DateAdherence(""),Montant(0){}
	Adherent::Adherent(int matricule,int age,string nom,float salaire,
	string date_aderence,float montant):	
	Employe(matricule,age,nom,salaire),DateAdherence(date_aderence),Montant(montant){}
	float Adherent::GetMontant() const{ 
		return this->Montant;                 
    }
	void Adherent::SetMontant(float montant) { 
		this->Montant = montant;              
   }
	float Adherent::GetSalaire() const { 
		return  Employe::GetSalaire() - Montant; 
	}
	void Adherent::AfficherS(){
   	    cout << Employe::GetSalaire() - Montant;
	}
	string Adherent::ToString(){
	  stringstream ss;
	  ss << Employe::ToString() << " La  date d'adherence: "<<DateAdherence
		<<" Le montant de participation: "<<Montant;
	  return ss.str();
	}
	
	#endif
