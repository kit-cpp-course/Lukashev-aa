#include "GeneratorTable.h"
#include "DataSource.h"



GeneratorTable::GeneratorTable()
{
}

void GeneratorTable::Generate(int n, DataSource *Source, int SizeArr, string EndFile)
{
	/*Пеереопределение метода генерации
	*Так как в самом начале первая строка генерируется для обозначения столбцов и сразу записывается в файл,
	*то она считывается из него.
	*Потом, после открытия, эта строка повторно записывается(Иначе бы при простом открытии и записи она перезаписалась бы)
	*Так же изменен разделитель между словами(пробел) на ";" для корректного составления таблицы
	*/
	ifstream Input;
	Input.open(EndFile);
	string Ln;
	//Считывание строки с названиями столбцов
	getline(Input, Ln);
	Input.close();
	ofstream Output;
	Output.open(EndFile);
	//Запись считанных названий столбцов
	Output << Ln << endl;
	//Генерация записей
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


