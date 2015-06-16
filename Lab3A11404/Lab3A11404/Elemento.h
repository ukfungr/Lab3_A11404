/*
 * Elemento.h
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */

#ifndef ELEMENTO_H_
#define ELEMENTO_H_

#include <iostream>
using namespace std;

class Elemento {

	friend ostream & operator<<(ostream &, const Elemento &);

protected:
	Elemento();
	Elemento * hIzq, * hDer;

public:
	Elemento * getHijoIzq();
	Elemento * getHijoDer();
	void setHijoIzq(Elemento *);
	void setHijoDer(Elemento *);

	virtual ~Elemento();
	virtual int compareTo(Elemento *) = 0;
	virtual void imprimir(ostream &) const = 0;

	bool operator<(Elemento &);
	bool operator<=(Elemento &);
	bool operator>(Elemento &);
	bool operator>=(Elemento &);

};

ostream & operator<<(ostream &, const Elemento &);

#endif /* ELEMENTO_H_ */
