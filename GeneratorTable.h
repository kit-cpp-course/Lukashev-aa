#pragma once
#include "Generator.h"
#include "DataSource.h"

//����� ���������� ������
class GeneratorTable: virtual Generator
{
public:
	//��������������� ������ ��� ���������� �������
	GeneratorTable();
	void Generate(int n, DataSource *Source, int SizeArr, string EndFile);
};

