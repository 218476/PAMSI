/*
 * map.h
 *
 *  Created on: 15 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_MAP_H_
#define INC_MAP_H_

#define START_BUCKET_AMOUNT 10



#include <string>
#include "interface/mapinterface.h"
#include "list.h"

class Map : public MapInterface
{
private:
	List* data;
public:

	virtual int	 operator[](std::string key);
	 void Add       (std::string key, int value);
	Map();
};



#endif /* INC_MAP_H_ */
