#include<iostream>
using namespace std;

class Vehicule{
	public:
		virtual void affiche() const;
	protected:
		int m_prix;
};

class Voiture:public Vehicule{
	public:
		virtual void affiche() const;
	private:
		int m_portes;
};

class Moto:public Vehicule{
	public:
		virtual void affiche() const;
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

void presenter(Vehicule const & v){
	v.affiche();
}

int main(){
//	Vehicule v;
//	presenter(v);
//	
	Moto m;
	presenter(m);
	
	// Destruction 
	Vehicule *v(0);
	v=new Voiture;
	v->affiche();
	delete v;
	
	return 0;
}
