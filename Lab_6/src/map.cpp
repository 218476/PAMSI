/*
 * map.cpp
 *
 *  Created on: 15 kwi 2016
 *      Author: dmajchrz
 */



#include "../inc/map.h"
#include <iostream>

Map::Map()
{
	data  = new List[BUCKET_AMOUNT];
	hash.Set_Bucket_Amount(BUCKET_AMOUNT);
}


int	 Map::operator[](std::string key)
{
	int bucket_index = hash.Get_Hash(key);
	for(int i = 0; i < data[bucket_index].Get_Size(); i++)
	{
		if(key  == data[bucket_index].Get(i)->Get_Name())
			return data[bucket_index].Get(i)->Get_Value();
	}
	throw "Object_Not_Found_Exception";

	return -1;
}
void Map::Add       (std::string key, int value)
{
	data[hash.Get_Hash(key)].Add(0,key,value);
}

void Map::Remove       (std::string key)
{
	int bucket_index = hash.Get_Hash(key);
	for(int i = 0; i < data[bucket_index].Get_Size(); i++)
	{
		if(key  == data[bucket_index].Get(i)->Get_Name())
		{
			data[bucket_index].Remove(i);
			return;
		}


	}
	throw "Object_Not_Found_Exception";
}
