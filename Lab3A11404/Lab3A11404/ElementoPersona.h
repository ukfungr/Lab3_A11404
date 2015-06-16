/*
 * Persona.h
 *
 *  Created on: 8/5/2015
 *      Author: R
 */

#ifndef ELEMENTOPERSONA_H_
#define ELEMENTOPERSONA_H_

#include "Elemento.h"
#include "Persona.h"

#include <iostream>

using namespace std;

class ElementoPersona : public Elemento {

private:

	Persona * p;

public:
	ElementoPersona(Persona *);
	virtual ~ElementoPersona();
	Persona * getPersona();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;

};

#endif /* ELEMENTOPERSONA_H_ */
