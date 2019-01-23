#pragma once
#include "stdafx.h"
#include "DataSource.h"
using namespace std;

//����������� ����� ����������
class Generator: public DataSource
{
public:
	Generator();
	//��������� ������
	void Generate(int n, DataSource *Source, int SizeArr, string EndFile);
	//����� ������
	string ReturnLn();
	//������ � ������
	void GetLn(string str);
	//���������� � ������ �������������� ������
	void AddStr(string str);
private:
	//����������� ������, ������������ �� ������� � ��������
	string line;
};



