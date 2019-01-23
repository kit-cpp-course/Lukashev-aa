#pragma once
#include "stdafx.h"
#include "DataSource.h"
using namespace std;

//¬иртуальный класс генератора
class Generator: public DataSource
{
public:
	Generator();
	//√енераци€ данных
	void Generate(int n, DataSource *Source, int SizeArr, string EndFile);
	//¬ывод строки
	string ReturnLn();
	//запись в строку
	void GetLn(string str);
	//добавление в строку дополнительной записи
	void AddStr(string str);
private:
	//генерирума€ строка, составленна€ из записей в словар€х
	string line;
};



