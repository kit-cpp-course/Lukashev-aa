#include "DataSource.h"
#include"stdafx.h"
#include "GeneratorTable.h"
using namespace std;



int main(int argc, char* argv[]) {
	srand(time(0));
	// Output - переменна€ дл€ работы с конечным файлом
	ofstream Output;
	/*
	* Count - количество генерируемых записей	
	* AmountDate - количество словарей дл€ составлени€ записей
	*/
	int count, AmountDate;
	/*
	* NameCollum - используетс€ в вопросе, называть ли столбец в конечном файле именем словар€
	*/
	char NameCollum;
	/*
	* Directory - путь до словар€(или словарей, если все наход€тс€ в одном каталоге)
	* NameOut - им€ конечного файла
	* Name - название словар€
	* GenerationLine - запись, сохран€юща€с€ в конечный файл
	* NameCollums - им€ столбца
	*/
	string Directory, NameOut, Name, GenerationLine, NameCollums;
	// DateSource - массив строк, кажда€ из которых прив€зана к конкретному словарю
	DataSource *Source;
	if (argc != 1) 
	{
		//запуск из командной строки
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
		//запуск из консоли
		cout << "¬ведите полный путь до конечного файла с именем и расширением CSV." << endl;
		cin >> NameOut;
		Output.open(NameOut);
		Output << "Index;";
		cout << "¬ведите количество словарей." << endl;
		cin >> AmountDate;
		Source = new DataSource[AmountDate];
		cout << "¬нимание! ¬водите словари в том пор€дке, в котором хотите получить данные в конечном файле." << endl;
		cout << "¬ведите путь до каталога словарей" << endl;
		cin >> Directory;
		//«аполнение массива словарей, когда выбран вариант, что словари наход€тс€ в одном каталоге
		for (int i = 0; i < AmountDate; i++)
		{
			cout << "¬ведите им€ словар€ вместе с расширением" << endl;
			cin >> Name;
			Source[i].DataSource::DataSource(Name, Directory);
			Output << Source[i].date.ReturnNameWithoutExterrior() + ';';
		}

		Output << endl;
		cout << "¬ведите количество генерируемых данных." << endl;
		cin >> count;
		Output.close();
	}
		//генераци€ необходимого количества записей
		GeneratorTable Gnr;
		Gnr.Generate(count, Source, AmountDate, NameOut);
		
		delete[] Source;
}