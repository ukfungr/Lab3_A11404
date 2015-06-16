/*
 * ElementoDouble.h
 *
 *  Created on: May 8, 2015
 *      Author: A11404
 */

#ifndef ELEMENTODOUBLE_H_
#define ELEMENTODOUBLE_H_

#include "Elemento.h"


using namespace std;

class ElementoDouble : public Elemento {

protected:

	double d;

public:
	ElementoDouble(double d);
	virtual ~ElementoDouble();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;

};

#endif /* ELEMENTODOUBLE_H_ */
