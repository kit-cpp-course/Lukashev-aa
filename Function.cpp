#include "stdafx.h";
#include "Function.h"




string FindStr(int index, string input) 
{
	string line;
	int random = rand() % index + 1;
	ifstream Input;
	Input.open(input);
	if (Input.is_open())
	{

		for (int k = 0; k < random - 1; k++)
		{
			getline(Input, line);
		}

	}
	Input.close();
	return line;
}