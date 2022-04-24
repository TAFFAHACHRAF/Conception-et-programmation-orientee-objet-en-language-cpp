#include<iostream>
using namespace std;

class Vehicule{
	public:
		void affiche() const;
	protected:
		int m_prix;
};

class Voiture:public Vehicule {
	public:
		void affiche() const;
	private:
		int m_portes;
};

class Moto :public Vehicule {
	public:
		void affiche() const;
	private:
		double m_vitesse;
};

void Vehicule::affiche() const{
	cout <<"Ceci est un vehicule."<<endl;
}

void Voiture::affiche() const{
	cout <<"Ceci est une voiture."<< endl;
}

void Moto::affiche() const{
	cout <<"Ceci est une moto."<<endl;
}

int main(){
	Vehicule v;
	v.affiche();
	
	Moto m;
	m.affiche();
	
	return 0;
}
