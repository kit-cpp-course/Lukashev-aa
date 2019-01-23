#include "Generator.h"




Generator::Generator()
{
}
void Generator::Generate(int n, DataSource *Source, int SizeArr, string EndFile)
{
	/*Генерирует строку из слов в словарях и записывает строку в файл
	*слова разделены пробелом
	*/
	ofstream Output;
	Output.open(EndFile);
	for (int i = 1; i <= n; i++)
	{
		line = "";
		for (int k = 0; k < SizeArr; k++)
		{
			Source[k].RndLine();
			line = line + Source[k].ReturnLine() + ' ';
		}
		Output << line << endl;
	}
	Output.close();
}

string Generator::ReturnLn()
{
	return line;
}
void Generator::GetLn(string str)
{
	line = str;
}
void Generator::AddStr(string str)
{
	line = line + str;
}