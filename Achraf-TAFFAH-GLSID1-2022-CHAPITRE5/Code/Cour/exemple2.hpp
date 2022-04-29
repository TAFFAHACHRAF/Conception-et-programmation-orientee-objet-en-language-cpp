#ifndef	_LISTE_
	#define _LISTE_
	class liste{
		int taille;
		float *adr;
		public:
			liste(const liste& v);  // Constructeur par recopie
			liste(int);		// Constructeur
			void saisie(); 
			void affiche();
			void operator=(liste &); // Surdefinition de l'operateur =
			~liste();
	};
	#endif
