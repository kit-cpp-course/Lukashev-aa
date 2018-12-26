#pragma once
#include "People.h"
#include "Product.h"
#include "stdafx.h"


class Client : public People
{
public:
	Product ProductC;
	std::string	PaymentMethod;
	int PriceC, AmountC;
	~Client();
	Client();
	std::string PrintAllInfo();
private:

};

