#pragma once
#include"People.h"
#include"Product.h"
#include "stdafx.h"
#include <fstream>


class Seller: public People
{
public:
	Product ProductS;
	std::string Firm;
	int PriceS, AmountS;
	~Seller();
	Seller();
	std::string PrintAllInfo();
private:

};

