#include "GeneratorTable.h"
#include "DataSource.h"



GeneratorTable::GeneratorTable()
{
}

void GeneratorTable::Generate(int n, DataSource *Source, int SizeArr, string EndFile)
{
	/*���������������� ������ ���������
	*��� ��� � ����� ������ ������ ������ ������������ ��� ����������� ��������, �� ��� ����������� �� �����
	*�����, ����� ��������, ��� ������ �������� ������������(����� �� ��� ������� �������� � ������ ��� ��������������)
	*��� �� ������� ����������� ����� �������(������) �� ";"
	*/
	ifstream Input;
	Input.open(EndFile);
	string Ln;
	getline(Input, Ln);
	Input.close();
	ofstream Output;
	Output.open(EndFile);
	Output << Ln << endl;
	for (int i = 1; i <= n; i++)
	{
		GetLn("");
		AddStr(to_string(i) + ";");
		for (int k = 0; k < SizeArr; k++)
		{
			Source[k].RndLine();
			AddStr(Source[k].ReturnLine());
			AddStr(";");
		}
		Output << ReturnLn() << endl;
	}
	Output.close();
}


