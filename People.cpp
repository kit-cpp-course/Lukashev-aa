#include "People.h"






std::string People::PrintAllInfo() {
	return DateOfBirth.PrintDate() + ";" + Fname + ";" + Lname;
}
People::~People()
{
}
People::People()
{
}