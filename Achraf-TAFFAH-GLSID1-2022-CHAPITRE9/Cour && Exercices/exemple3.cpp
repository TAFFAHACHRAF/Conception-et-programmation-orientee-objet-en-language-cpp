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

void presenter(Vehicule const & v){
	v.affiche();
}

int main(){
	Vehicule v;
	presenter(v);
	
	Moto m;
	presenter(m);
	
	// Destruction 
//	Vehicule *v(0);
//	v=new Voiture;
//	v->affiche();
//	delete v;
	
	return 0;
}
