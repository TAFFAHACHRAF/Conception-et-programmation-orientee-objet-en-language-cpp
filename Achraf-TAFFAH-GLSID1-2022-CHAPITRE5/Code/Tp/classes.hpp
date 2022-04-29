#ifndef _CLASSES_
	#define _CLASSES
	#include <math.h>
	#define PI 3.14159265359
	class coordonne{
	  	int x,y;
		public:
			coordonne(int a=0,int b = 0):x(a),y(b){}
			void deplacer(int,int);
			void afficher();
			int get_x() const;
			int get_y() const;
			friend  distance(coordonne const & a,coordonne const & b){
			    return sqrt(((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y)));
			}	
	};
	class forme{
		protected:
			short couleur;
		public:
			forme(short s = 1):couleur(s){}
			forme(forme & f){
			    this->couleur = f.couleur;
			}		
			void affiche();
			forme operator=(forme &f);
	};
	class cercle : public forme{
		protected:
			coordonne centre;
			short rayon;
		public:
			cercle(int x,int y,short rayon,short couleur):forme(couleur),centre(x,y),rayon(rayon){}
			cercle(cercle & c):forme(c.couleur),centre(c.centre),rayon(c.rayon){}
			void affiche();
			void deplacer(int x,int y);
			float surface()   const;
			float perimetre() const;
			cercle operator=(cercle &f);
	};
	
	class triangle: public forme{
		protected:
			coordonne a,b,c;
		public:
			triangle(int a_x,int a_y,int b_x,int b_y,int c_x,int c_y,short couleur):
					forme(couleur),a(a_x,a_y),b(b_x,b_y),c(c_x,c_y){}
			triangle(triangle & t):forme(t.couleur),a(t.a),b(t.b),c(t.c){}
			triangle operator =(triangle & t);
			void affiche();
			void deplacer(int x,int y);
			float surface()   const;
			float perimetre() const;
	};
	
	class rectangle: public forme{
		protected:
			coordonne a,b;
		public:
			rectangle(int a_x,int a_y,int b_x,int b_y,short couleur):forme(couleur),a(a_x,a_y),b(b_x,b_y){}
			rectangle(rectangle & r):forme(r.couleur),a(r.a),b(r.b){}
			rectangle operator =(rectangle & t);
			void affiche();
			void deplacer(int x,int y);
			float surface()   const;
			float perimetre() const;
	};
	
	class carre: public forme{
		protected:
			coordonne a;
			short cote;
		public:
			carre(int a_x,int a_y,short cote,short couleur):forme(couleur),cote(cote),a(a_x,a_y){}
			carre(carre & c):forme(c.couleur),a(c.a){}
			void affiche();
			void deplacer(int x,int y);
			float surface()   const;
			float perimetre() const;
	};
	#endif
