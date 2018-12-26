#include "Client.h"
#include "Seller.h"
#include "stdafx.h"
#include <Windows.h>
using namespace std;



int main() {
	unsigned int amount;
	ofstream Output;
	bool random=false;
	cout << "Enter the number of the generated records" << endl;
	cin >> amount;
	Output.open("D:\\Finish.csv");
	srand(time(0));
	for (int i = 0; i < amount; i++)
	{
		if (random)
		{
			Client Clt;
			Output << "Покупатель ;" + Clt.PrintAllInfo() << endl;
			random = false;
		}
		else
		{
			Seller Slr;
			Output << "Продавец ;" + Slr.PrintAllInfo() << endl;
			random = true;
		}
	}
	Output.close();
	
}