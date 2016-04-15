/*
 * map.cpp
 *
 *  Created on: 15 kwi 2016
 *      Author: dmajchrz
 */



#include "../inc/map.h"

Map::Map()
{
	data  = new List[START_BUCKET_AMOUNT];
}


int	 Map::operator[](std::string key)
{
	for(int i = 0; i < data[0].Get_Size(); i++)
	{
		if(key == data[0].Get(i)->Get_Name())
			return data[0].Get(i)->Get_Value();
	}
	return -1;
}
void Map::Add       (std::string key, int value)
{
	data[0].Add(0,key,value);
}
