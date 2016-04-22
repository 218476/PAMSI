/*
 * hashinterface.h
 *
 *  Created on: 21 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_INTERFACE_HASHINTERFACE_H_
#define INC_INTERFACE_HASHINTERFACE_H_

#include <string>

class Hash_Interface
{
private:
	unsigned int bucket_amount;
public:
	virtual int Get_Bucket_Amount() = 0;
	virtual void Set_Bucket_Amount(unsigned int bucket_amount) = 0;
	virtual int Get_Hash(std::string str) = 0;
};



#endif /* INC_INTERFACE_HASHINTERFACE_H_ */
