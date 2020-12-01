//klas drob
#include <iostream>
using namespace std;

class Fraction {
private:
	int nom;//chislitel
	int denom;//znaminatel
public:
	//konstructor po ymolchniu
	Fraction() {
		nom =0 ;
		denom = 1;
	}
	//gettet and setter
	void setNom(int fnom) {		nom = fnom;	}
	int getnom() {	return nom;	}
	void setdeNom(int fdenom) { denom = fdenom; }
	int getdenom() { return denom; }
	void print() {
		cout << nom << '/' << denom << endl;
		if (nom==0) {
			cout << '0' << endl;
		}
		else
		if (denom == 0) {
			cout << "error" << endl;
		}
		else
		cout << nom << '/' << denom << endl;
	}
	Fraction mul(Fraction b) {
		Fraction c;
		c.nom = nom * b.nom;
		c.denom = denom * b.denom;
		return c;
	}
	Fraction div(Fraction b) {
		Fraction c;
		c.nom = nom* b.denom;
		c.denom = denom * b.nom;
		return c;
	}
	Fraction add(Fraction b) {
		Fraction c;
		c.denom = denom * b.denom;
		c.nom = nom * b.denom + b.nom * denom;
		return c;
	}
	Fraction sub(Fraction b) {
		Fraction c;
		c.denom = denom * b.denom;
		c.nom = nom * b.denom - b.nom * denom;
		return c;
	}
};


int main(){
	Fraction a,b,res;//ramota constructor po ymolchaniu
	a.setNom(1);
	a.setdeNom(2);
	a.print();
	res = a.mul(b);
	res.print();

	b.setNom(1);
	b.setdeNom(3);
	res = a.div(b);
	res.print();
	return 0;
}

