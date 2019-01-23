#include"DataSource.h"



DataSource::DataSource(std::string Name, std::string Directory)
{
	date = Name == "NULL" ? Data(Directory) : Data(Name, Directory);
}
std::string DataSource::ReturnLine() {
	return Line;
}

void DataSource::RndLine()
{
	Line = date.ReturnRandomLine();
}