#if !defined(COMPLEXE)
#define COMPLEXE
#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

class complexe{
  double real,img;
public:
  complexe(double,double);
  double get_real() const;
  double get_img() const;
  void set_real(double);
  void set_img(double);
  complexe conj();
  double norm();
  double arg();
  complexe polar(double,double);
  complexe operator+(complexe const &);
  complexe operator-(complexe const &);
  complexe operator*(complexe const &);
  complexe operator/(complexe const &);
  bool operator==(complexe const &);
  bool operator!=(complexe const &);
  complexe operator-();
  string to_string() const;

  friend complexe operator+(complexe const &,double);
  friend complexe operator+(double,complexe const &);

  friend complexe operator-(complexe const &,double);
  friend complexe operator-(double,complexe const &);

  friend complexe operator*(complexe const &,double);
  friend complexe operator*(double,complexe const &);

  friend complexe operator/(complexe const &,double);
  friend complexe operator/(double,complexe const &);

  friend ostream & operator << (ostream &, complexe const &);
  friend istream & operator >> (istream &, complexe &);
};

complexe::complexe(double r,double im):real(r),img(im){}

double complexe::get_real() const{
  return this->real;
}
double complexe::get_img() const{
  return this->img;
}
void complexe::set_real(double r){this->real = r;}
void complexe::set_img(double im){this->img = im;}
complexe complexe::polar(double adj,double deg){
  return complexe(adj * cos(deg) , adj * sin(deg));
}

complexe complexe::conj(){
  return complexe(this->real,-this->img);
}
double complexe::norm(){
  return sqrt((this->real*this->real)+(this->img*this->img));
}
double complexe::arg(){
  return atan(this->real/this->img);
}

complexe complexe::operator+(complexe const & comp){
  return complexe(this->real+comp.real,this->img+comp.img);
}
complexe complexe::operator-(complexe const & comp){
  return complexe(this->real-comp.real,this->img-comp.img);
  
}
complexe complexe::operator*(complexe const & comp){
  return complexe(this->real*comp.real,this->img*comp.img);
}
complexe complexe::operator/(complexe const & comp){
  double r,im;
  (comp.real == 0) ? r = 0 : r = this->real / comp.real;
  (comp.img == 0) ? im = 0 : im= this->img / comp.img;
  return complexe(r,im);
}
bool complexe::operator==(complexe const & comp){
  return (this->real == comp.real) && (this->img == comp.img);
}
bool complexe::operator!=(complexe const & comp){
  return (this->real != comp.real) || (this->img != comp.img);
}
complexe complexe::operator-(){
  return complexe(-this->real,-this->img);
}
string complexe::to_string() const{
  string stream ss;
  ss<<this->real<<(this->img > 0 ? " + " : " - ")<<abs(this->img)<<" i";
  return ss.str();
}

complexe operator+(complexe const & comp,double value){
  return complexe(comp.real,comp.img+value);
}
complexe operator+(double value,complexe const & comp){
  return complexe(comp.real+value,comp.img);
  
}

complexe operator-(complexe const & comp,double value){
  return complexe(comp.real,comp.img-value);
}
complexe operator-(double value,complexe const & comp){
  return complexe(comp.real-value,comp.img);
}

complexe operator*(complexe const & comp,double value){
  return complexe(comp.real,comp.img*value);
}
complexe operator*(double value,complexe const & comp){
  return complexe(comp.real*value,comp.img);
}

complexe operator/(complexe const & comp,double value){
  double im;
  (value == 0) ? im = 0 : im=comp.img/value;
  return complexe(comp.real,im);
}
complexe operator/(double value,complexe const & comp){
  double r;
  (value == 0) ? r = 0 : r = comp.real/value;
  return complexe(r,comp.img);
}

ostream & operator << (ostream & out, complexe const & comp){
  out << comp.to_string();
  return out;
}
istream & operator >> (istream & in, complexe & comp){
  in >> comp.real >> comp.img;
  return in;
}

#endif // COMPLEXE
