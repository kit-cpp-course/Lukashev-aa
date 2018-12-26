#include "Date.h"





std::string Date::PrintDate() {
	return std::to_string(Day) + "." + std::to_string(Month) + "." + std::to_string(Year);
}
Date::Date()
{
	Day = rand() % 28 + 1;
	Month = rand() % 12 + 1;
	Year = 1950 + rand() % (2010 - 1950);
}

Date::~Date()
{
}