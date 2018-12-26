#include "Product.h"
#include "Function.h"



Product::Product()
{
	NameP = FindStr(48, "Slovari/Products.txt");
	DateOfManufacture;
}

Product::~Product()
{
}

std::string Product::PrintAllInfoPrd() {
	return DateOfManufacture.PrintDate() + ";" + NameP;
}
