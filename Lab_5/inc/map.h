/*
 * map.h
 *
 *  Created on: 15 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_MAP_H_
#define INC_MAP_H_

#define BUCKET_AMOUNT 10000



#include <string>
#include "interface/mapinterface.h"
#include "list.h"
#include "hash.h"


class Map : public MapInterface
{
private:
	List* data;
	Hash  hash;
public:

	 virtual int	 operator[](std::string key);
	 virtual void Add       (std::string key, int value);
	 virtual void Remove	(std::string key);
	Map();
};



#endif /* INC_MAP_H_ */
