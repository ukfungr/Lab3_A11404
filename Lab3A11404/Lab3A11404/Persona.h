/*
 * Personas.h
 *
 *  Created on: 12/5/2015
 *      Author: R
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>
using namespace std;

class Persona {
	friend ostream & operator<<(ostream & , const Persona &);

private:
	string name;
	int id;

public:
	Persona(string, int);
	virtual ~Persona();

	void setName(string);
	void setId(int);
	string getName();
	int getId();
	Persona getPersona();

};



#endif /* PERSONA_H_ */
