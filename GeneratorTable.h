#pragma once
#include "Generator.h"
#include "DataSource.h"

//Класс генератора таблиц
class GeneratorTable: virtual Generator
{
public:
	//переопределение метода для построения таблицы
	GeneratorTable();
	void Generate(int n, DataSource *Source, int SizeArr, string EndFile);
};

