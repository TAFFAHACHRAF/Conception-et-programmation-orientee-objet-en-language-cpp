#include<iostream>
using namespace std;
class Vehicule {
	public:
		Vehicule(int prix);
		virtual void affiche()	const;
		virtual int nbrRoues()	const;
		
		virtual~Vehicule();
		
		protected:
			int m_prix;
};
class Voiture :public Vehicule {
	public:
		Voiture(int prix,int portes):Vehicule(prix),m_portes(portes){}
		virtual void affiche()	const;
		virtual int nbrRoues()	const;
		
		virtual~Voiture();
	private:
		int m_portes;
};
Vehicule::Vehicule(int prix){
	m_prix=prix;
}
void Vehicule::affiche() const{
	cout <<"Ceci est un vehicule coutant "<<m_prix<<"Dhs."<<endl;
}
Vehicule::~Vehicule(){}
void Voiture::affiche() const{
	cout <<"Ceci est une voiture avec "<< m_portes <<" portes et coutant "<< m_prix << " Dhs."<<endl;
}

Voiture::~Voiture(){}

int Vehicule::nbrRoues()  const{
	return 0;
}

int Voiture::nbrRoues()	const{
	return 4;
}

int main(){
	Vehicule* ptr(0);
	Voiture caisse(2000,5);
	
	ptr=&caisse;
	cout << "Le nombre des Roues : " << ptr->nbrRoues() << endl;
	
	return 0;
}
