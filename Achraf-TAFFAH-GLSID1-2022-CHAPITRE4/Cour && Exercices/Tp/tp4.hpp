#ifndef _TP4_
	#define _TP4_
	static int i;
	class Note{
		public:
		  float value;
		  void input();
		  void print();
		  void set(float);
		  float get();
		  string apprecier();
	};
	void Harmonise(Note & note);
	float Moyenne(Note *note,int nbr);
	void Appreciation(Note *note,int nbr);
	#endif
