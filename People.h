#pragma once
#include <string>
#include "Date.h"

class People
{
public:
	~People();
	People();
	std::string Fname, Lname;
	Date DateOfBirth;
	std::string PrintAllInfo();
private:

};

