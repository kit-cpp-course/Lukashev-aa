#pragma once
#include <string>
#include "Date.h"


class Product
{
public:

	Product();
	~Product();
	std::string NameP;
	Date DateOfManufacture;
	std::string PrintAllInfoPrd();
private:
	
};

