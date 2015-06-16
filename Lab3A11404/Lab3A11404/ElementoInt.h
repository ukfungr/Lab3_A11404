/*
 * ElementoInt.h
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */

#ifndef ELEMENTOINT_H_
#define ELEMENTOINT_H_

#include "Elemento.h"

using namespace std;

class ElementoInt : public Elemento {

protected:
	int i;

public:
	ElementoInt(int i);
	virtual ~ElementoInt();
	virtual int compareTo(Elemento *);
	virtual void imprimir(ostream &) const;

};

#endif /* ELEMENTOINT_H_ */
