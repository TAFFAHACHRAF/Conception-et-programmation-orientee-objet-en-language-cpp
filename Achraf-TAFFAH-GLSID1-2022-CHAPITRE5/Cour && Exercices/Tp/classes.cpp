#include"classes.hpp"
//Classe coordonne
  void coordonne::deplacer(int a,int b){
    x+=a;
    y+=b;
  }
  void coordonne::afficher(){
    cout <<"x = "<<x<<" y = "<<y<<endl;
  }
  int coordonne::get_x() const{
    return this->x;
  }
  int coordonne::get_y() const{
    return this->y;
  }
//Classe forme
  void forme::affiche(){
    cout <<"couleur : "<< couleur << endl;
  }
  forme forme::operator=(forme &f){
    forme nf(f.couleur);
    return nf;
  }
//Classe cercle
	void cercle::affiche(){
    cout << "cercle"<<endl;
    centre.afficher();
    forme::affiche();
    cout << "rayon : "<< rayon << endl;
  }
  void cercle::deplacer(int x,int y){
    centre.deplacer(x,y);
  }
  float cercle::surface()   const{ return (PI*rayon*rayon); }
  float cercle::perimetre() const{ return (2*PI*rayon)    ; }
  cercle cercle::operator=(cercle &f){
    cercle c(f);
    return c;
  }
//Classe  triangle
  triangle triangle::operator =(triangle & t){
    triangle ts(t);
    return ts;
  }
  void triangle::affiche(){
    cout << "triangle"<<endl;
    a.afficher();
    b.afficher();
    c.afficher();
    forme::affiche();
  }
  void triangle::deplacer(int x,int y){
    a.deplacer(x,y);
    b.deplacer(x,y);
    c.deplacer(x,y);
  }
  float triangle::surface()   const{
    float ab = distance( this->a , this->b );
    float ac = distance( this->a , this->c );
    float bc = distance( this->b , this->c ); 
    float h = 0.5 * sqrt(((ab + bc + ac) * (-ab + bc + ac) * (ab - bc + ac) * (ab + bc - ac)) / bc);
    return (bc * h) / 2;
  }
  float triangle::perimetre() const{ 
    float ab = distance( this->a , this->b );
    float ac = distance( this->a , this->c );
    float bc = distance( this->b , this->c ); 
    return ( ab + ac + bc );
  }
// Classe  rectangle
   rectangle rectangle::operator =(rectangle & t){
    rectangle ts(t);
    return ts;
  }
  void rectangle::affiche(){
    cout << "rectangle"<<endl;
    a.afficher();
    b.afficher();
    forme::affiche();
  }
  void rectangle::deplacer(int x,int y){
    a.deplacer(x,y);
    b.deplacer(x,y);
  }
  float rectangle::surface()   const{
    float w = abs(a.get_x()-b.get_x());
    float l = abs(a.get_y()-b.get_y());
    return (w*l);
  }
  float rectangle::perimetre() const{ 
    float w = abs(a.get_x()-b.get_x());
    float l = abs(a.get_y()-b.get_y());
    return (w+l)*2;
  }
//CLasse  carre
 void carre::affiche(){
    cout << "carre"<<endl;
    a.afficher();
    cout <<"cote : "<<cote<<endl;
    forme::affiche();
  }
  void carre::deplacer(int x,int y){
    a.deplacer(x,y);
  }
  float carre::surface()   const{
    return (cote*cote);
  }
  float carre::perimetre() const{ 
    return cote*4;
  }
