#include "GeneratorTable.h"
#include "DataSource.h"



GeneratorTable::GeneratorTable()
{
}

void GeneratorTable::Generate(int n, DataSource *Source, int SizeArr, string EndFile)
{
	/*ѕеереопределение метода генерации
	*“ак как в самом начале перва€ строка генерируетс€ дл€ обозначени€ столбцов, то она считываетс€ из файла
	*ѕотом, после открыти€, эта строка повторно записываетс€(»наче бы при простом открытии и записи она перезаписалась)
	*“ак же изменен разделитель между словами(пробел) на ";"
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


