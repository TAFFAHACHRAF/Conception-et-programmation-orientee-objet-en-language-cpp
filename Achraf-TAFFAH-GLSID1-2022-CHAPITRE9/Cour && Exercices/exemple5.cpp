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

class Voitures :public Vehicule {
	public:
		Voiture(int prix,int portes);
		virtual void affiche()	const;
		virtual int nbrRoues()	const;
		
		virtual~Voiture();
	private:
		int m_portes;
};

int Vehicule::nbrRoues()  const{
	// Que mettre ici ???
}

int Voiture::nbrRoues()	const{
	return 4;
}

class Vehicule{
	public:
		Vehicule(int prix);
		virtual void affiche()	const;
		virtual int nbrRoues() const=0;
		
		virtual~Vehicule();
	
	protected:
		int m_prix;
};

int main(){
	Vehicule* ptr(0);
	voiture caisse(2000,5);
	
	ptr=&caisse;
	cout << ptr->nbrRoues() << endl;
	
	return 0;
}
