/*
 * hash.h
 *
 *  Created on: 21 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_HASH_H_
#define INC_HASH_H_



#include "interface/hashinterface.h"

class Hash : public Hash_Interface
{

private:
	unsigned int bucket_amount;
public:
	virtual int Get_Bucket_Amount();
	virtual void Set_Bucket_Amount(unsigned int bucket_amount);
	virtual int Get_Hash(std::string str);
};

#endif /* INC_HASH_H_ */
