#include "DataSource.h"
#include"stdafx.h"
#include "GeneratorTable.h"
using namespace std;



int main(int argc, char* argv[]) {
	srand(time(0));
	// Output - ���������� ��� ������ � �������� ������
	ofstream Output;
	/*
	* Count - ���������� ������������ �������	
	* AmountDate - ���������� �������� ��� ����������� �������
	*/
	int count, AmountDate;
	/*
	* NameCollum - ������������ � �������, �������� �� ������� � �������� ����� ������ �������
	*/
	char NameCollum;
	/*
	* Directory - ���� �� �������(��� ��������, ���� ��� ��������� � ����� ��������)
	* NameOut - ��� ��������� �����
	* Name - �������� �������
	* GenerationLine - ������, ������������� � �������� ����
	* NameCollums - ��� �������
	*/
	string Directory, NameOut, Name, GenerationLine, NameCollums;
	// DateSource - ������ �����, ������ �� ������� ��������� � ����������� �������
	DataSource *Source;
	if (argc != 1) 
	{
		//������ �� ��������� ������
			NameOut = argv[1];
			Output.open(NameOut);
			Output << "Index;";
			AmountDate = atoi(argv[2]);
			Source = new DataSource[AmountDate];
			Directory = argv[3];
			for (int i = 0; i < AmountDate; i++)
			{
				Source[i].DataSource::DataSource(argv[i+4], Directory);
				Output << Source[i].date.ReturnNameWithoutExterrior() + ';';
			}
			Output << endl;
			count = atoi(argv[argc-1]);
		
	}
	else
	{
		//������ �� �������
		cout << "������� ������ ���� �� ��������� ����� � ������ � ����������� CSV." << endl;
		cin >> NameOut;
		Output.open(NameOut);
		Output << "Index;";
		cout << "������� ���������� ��������." << endl;
		cin >> AmountDate;
		Source = new DataSource[AmountDate];
		cout << "��������! ������� ������� � ��� �������, � ������� ������ �������� ������ � �������� �����." << endl;
		cout << "������� ���� �� �������� ��������" << endl;
		cin >> Directory;
		//���������� ������� ��������, ����� ������ �������, ��� ������� ��������� � ����� ��������
		for (int i = 0; i < AmountDate; i++)
		{
			cout << "������� ��� ������� ������ � �����������" << endl;
			cin >> Name;
			Source[i].DataSource::DataSource(Name, Directory);
			Output << Source[i].date.ReturnNameWithoutExterrior() + ';';
		}

		Output << endl;
		cout << "������� ���������� ������������ ������." << endl;
		cin >> count;
		Output.close();
	}
		//��������� ������������ ���������� �������
		GeneratorTable Gnr;
		Gnr.Generate(count, Source, AmountDate, NameOut);
		
		delete[] Source;
}