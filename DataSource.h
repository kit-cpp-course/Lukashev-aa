#pragma once
#include "stdafx.h"
#include "Data.h"



class DataSource  
{
public:
	//�������, � �������� ��������� ������
	Data date;
	DataSource(std::string Name, std::string Directory);
	DataSource() {};
	//����� ������
	std::string ReturnLine();
	//��������� ������
	void RndLine();
	
private:
	std::string Line;
};



