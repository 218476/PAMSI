/*
 * mapinterface.h
 *
 *  Created on: 15 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_INTERFACE_MAPINTERFACE_H_
#define INC_INTERFACE_MAPINTERFACE_H_




class MapInterface
{
private:
public:
	virtual int	 operator[](std::string key)            = 0;
	virtual void Add       (std::string key, int value) = 0;
	virtual void Remove    (std::string key) = 0;
};



#endif /* INC_INTERFACE_MAPINTERFACE_H_ */
