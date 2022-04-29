#ifndef _COMPLEXE
	#define _COMPLEXE_
		#include<string>
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
		#endif
