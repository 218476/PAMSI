/*
 * tabtes.h
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */


#ifndef TABTEST_H_
#define TABTEST_H_

#include "map.h"
#include <string>

class Test
{
private:
	Map dane;
	std::string Rand_String();
public:
	unsigned int problem_size;
	virtual void Badaj    (int n);
	virtual void Przygotuj(int n);
};


#endif /* TABTES_H_ */
