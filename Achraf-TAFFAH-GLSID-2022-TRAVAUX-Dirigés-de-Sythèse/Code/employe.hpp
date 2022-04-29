#ifndef _EMPLOYE_
	#define _EMPLOYE_
	#include <iostream>
	#include <string>
	#include <sstream>
	using namespace std;
	
	class Employe{
	  int Matricule,Age;
	  string Nom;
	  float Salaire;
	public:
	  Employe();
	  Employe(int,int,string,float);
	  virtual float GetSalaire() const;
	  void SetSalaire(float salaire);
	  virtual void AfficherS();
	  int GetAge() const;
	  void setAge(int age);
	  void AfficherA();
	  virtual string ToString(); 
	};
	Employe::Employe():Matricule(0),Age(0),Nom(""),Salaire(0){}
	Employe::Employe(int matricule,int age,string nom,float salaire):
	Matricule(matricule),Age(age),Nom(nom),Salaire(salaire){}
	string Employe::ToString(){
	  stringstream ss;
	  ss << ""<<Matricule<<" - Nom: "<<Nom<<"  Age: "<<Age<<"  Salaire: "<<Salaire;
	  return ss.str(); 
	}
	float Employe::GetSalaire() const{
		return Salaire;         
	}
	void  Employe::SetSalaire(float salaire) { 
		this->Salaire = salaire;  
	}
	void  Employe::AfficherS(){
		cout << this->Salaire;   
	}
	int   Employe::GetAge() const {
		return Age;              
	}
	void  Employe::setAge(int age){
		this->Age = age;          
	}
	void  Employe::AfficherA(){
		cout << this->Age;        
	}
	#endif 
