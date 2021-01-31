#include "buyProduct.h"

string buyProduct::Remove_Line(string line, int value)
{
	string str;
	for (size_t i = 1; i < (line.size() - value ) - 1; i++)
	{
		str += line[i];
	}
	return str;
}

buyProduct::buyProduct()
{
	cout << "~~~DEFAULT CTOR BUYPRODUCT~~~" << endl;
}

void buyProduct::deleteProduct()
{
	CLEEN;
	//cout << "Enter product that buy her : ";
	//cin >> action;
	//if (action == "Keyboard" || action == "keyboard")
	//{
	//	keyboard.printKeyboard();
	//	// print and deleting
	//	// erase with vector
	//}
	string begin{ 0 };
	string buf{ 0 };
	int value = 0;

	ifstream in;
	in.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Test.csv");
	if (!in.is_open())
	{
		ERROR;
		in.clear();
	}
	else
	{
		while (!in.eof())
		{
			getline(in, begin);
			cout << begin << endl;
			buf += (begin + "\n");
			value = begin.length();
		}
		buf = Remove_Line(buf, value);
		in.close();
	}

	in.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Test.csv");
	if (!in.is_open())
	{
		ERROR;
		in.clear();
	}
	else 
	{
		ofstream out("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Output.csv");
		if (out.is_open())
		{
			out << buf << endl;
			out.close();
		}
		else
		{
			ERROR;
			out.clear();
		}
		in.close();
	}
	in.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Output.csv");
	if (!in.is_open())
	{
		ERROR;
		in.clear();
	}
	else
	{
		cout << "\t\t\tOpen file " << endl;
		while (getline(in, buf))
		{
			cout << buf << endl;
		}
		in.close();
	}

}
