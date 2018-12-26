#include "Seller.h"
#include <fstream>
#include "Function.h"
using namespace std;
Seller::Seller()
{
	Fname = FindStr(315, "Slovari/names.txt");
	Lname = FindStr(254, "Slovari/surnames.txt");
	Firm = FindStr(20, "Slovari/Firm.txt");
	PriceS = rand() % 10000 + 1;
	AmountS = rand() % 10 + 1;
	DateOfBirth;
}

Seller::~Seller()
{
}
std::string Seller::PrintAllInfo() {
	return DateOfBirth.PrintDate() + ";" + Fname + ";" + Lname  + ";" + ProductS.PrintAllInfoPrd() + "; " + std::to_string(PriceS) + "; " + std::to_string(AmountS) + ";" + Firm;
}