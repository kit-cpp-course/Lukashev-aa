#include "Client.h"
#include <fstream>
#include "Function.h"



std::string Client::PrintAllInfo() {
	return DateOfBirth.PrintDate() + ";" + Fname + ";" + Lname + ";" + ProductC.PrintAllInfoPrd() + ";" + std::to_string(PriceC) + ";" + std::to_string(AmountC) + ";" + PaymentMethod;
}
Client::~Client()
{
}
Client::Client()
{
	Fname = FindStr(543, "Slovari/names.txt");
	Lname = FindStr(RAND_MAX, "Slovari/surnames.txt");
	PaymentMethod = FindStr(3, "Slovari/PayMethod.txt");
	PriceC = rand() % 10000 + 1;
	AmountC = rand() % 10 + 1;
	DateOfBirth;
}