#include"tp4.hpp"
	void Note::input(){
		float n(-1);
		while(n<0||n>20){
			cout <<"Entrez la note:";
			cin >> n;
			cout << endl;
		}
		this->set(n);
	}
	void Note::print(){
		cout << this->value << endl;
	}
	void Note::set(float v){
		this->value = v;
	}
	float Note::get(){
		return this->value;
	}
	string Note::apprecier(){
		if(this->value<=4)  return "Mediocre";
		if(this->value<=8)  return "Insuffisant";
		if(this->value<=11) return "Passable";
		if(this->value<=16) return "Bien";
		if(this->value<=19) return "Tres bien";
		return "Excellent";
	}
	void Harmonise(Note & note){
		if(note.get()<8){
			note.set(0);
			return;
		}
		note.set(8);
	}
	float Moyenne(Note *note,int nbr){
		float m = 0;
		for(i=0;i<nbr;i++){
			m+= (note+i)->get();
		}
		return m/nbr;
	}
	void Appreciation(Note *note,int nbr){
		for(i=0;i<nbr;i++)
		cout << "Etudiant : "<<i+1<<" "<<(note+i)->apprecier()<<endl;
	}
