#include<iostream>
using namespace std;

class Vehicule{
	public:
		Vehicule(int prix);
		virtual void affiche() const;
		virtual~Vehicule();
	protected:
		int m_prix;
};

class Voiture:public Vehicule{
	public:
		voiture(int prix,int portes);
		virtual void affiche() const;
		virtual~Voiture();
	private:
		int m_portes;
};

class Moto :public Vehicule{
	public:
		Moto(int prix,double vitesseMax);
		virtual void affiche()	const;
		virtual~Moto();
	private:
		double m_vitesse;
};

Vehicule::Vehicule(int prix):m_prix {}

void Vehicule::affiche() const{
	cout <<"Ceci est un vehicule coutant "<<m_prix<<"Dhs."<<endl;
}

//Vehicule::~Vehicule()

Voiture::Voiture(int prix,int portes):Vehicule(prix),m_portes(portes){}

void Voiture::affiche() const{
	cout <<"Ceci est une voiture avec "<< m_portes <<" portes et coutant "<< m_prix << " Dhs."<<endl;
}

Voiture::~Voiture(){}

Moto::Moto(int prix,double vitesseMax):Vehicule(prix),m_vitesse(vitesseMax){}

void Moto::affiche() const{
	cout <<"Ceci est une moto allant a "<< m_vitesse <<" km/h et coutant "<< m_prix <<" Dhs."<< endl;
}

Moto::~Moto(){}

int main(){
	return 0;
}
