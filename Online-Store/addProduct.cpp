#include "addProduct.h"
#include "Keyboard.h"
#include "Mouse.h"
#include <ctime>
#include "Monitor.h"
#include "Phone.h"
#include "Tablet.h"
#include "Headphones.h"
#include "Laptop.h"

addProduct::addProduct()
{
}

addProduct::~addProduct()
{}

void addProduct::input()
{
	

	cout << endl;
	cout << "~~~~~~INPUT~~~~~~" << endl;
	cout << endl;

	cout << "Enter type product:\t" << endl;
	cin >> product.typeProduct;
	if (product.typeProduct == "Keyboard" || product.typeProduct == "keyboard")
	{
		Keyboard key;
		key.input();
	}
	else if (product.typeProduct == "Mouse" || product.typeProduct == "mouse")
	{
		Mouse mouse;
		mouse.input();
	}
	else if (product.typeProduct == "Monitor" || product.typeProduct == "monitor")
	{
		Monitor monitor;
		monitor.input();
	}
	else if (product.typeProduct == "Phone" || product.typeProduct == "phone")
	{
		Phone phone;
		phone.input();
	}
	else if (product.typeProduct == "Tablet" || product.typeProduct == "tablet")
	{

		Tablet tablet;
		tablet.input();
	}
	else if (product.typeProduct == "Headphone" || product.typeProduct == "Head" ||
		product.typeProduct == "headphones" || product.typeProduct == "head")
	{
		HeadPhones headphones;
		headphones.input();
	}
	else if (product.typeProduct == "Laptop" || product.typeProduct == "laptop")
	{
		Laptop laptop;
		laptop.input();
	}
	else 
	{
		system("cls");
		cout << "--------------------------------------" << endl;
		cout << "  Sorry, you enter incorrect answer!  " << endl;
		cout << "--------------------------------------" << endl;
		system("pause");
		system("cls");
	}

	
}

void addProduct::print() const
{}

void addProduct::showAllProducts()
{
	string prod;
	system("cls");
	cout << "Enter type product that output : ";
	cin >> prod;
	if (prod == "Keyboard" || prod == "keyboard")
	{
		string line;
		ifstream myfile("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv");
		if (myfile.is_open())
		{
			while (!myfile.eof())
			{
				getline(myfile, line);
				cout << line << endl;
			}
		}
		myfile.close();

	}
	else if (prod == "Mouse" || prod == "mouse")
	{
		string line;
		ifstream myfile("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Mouse.csv");
		if (myfile.is_open())
		{
			while (!myfile.eof())
			{
				getline(myfile, line);
				cout << line << endl;
			}
		}
		myfile.close();
	}
	else if (prod == "Monitor" || prod == "monitor")
	{
		string line;
		ifstream myfile("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Monitor.csv");
		if (myfile.is_open())
		{
			while (!myfile.eof())
			{
				getline(myfile, line);
				cout << line << endl;
			}
		}
		myfile.close();
	}
	else if (prod == "Phone" || prod == "phone")
	{
		string line;
		ifstream myfile("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Phone.csv");
		if (myfile.is_open())
		{
			while (!myfile.eof())
			{
				getline(myfile, line);
				cout << line << endl;
			}
		}
		myfile.close();
	}
	else if (prod == "Tablet" || prod == "tablet")
	{
		string line;
		ifstream myfile("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Tablet.csv");
		if (myfile.is_open())
		{
			while (!myfile.eof())
			{
				getline(myfile, line);
				cout << line << endl;
			}
		}
		myfile.close();
	}
	else if (prod == "Laptop" || prod == "laptop")
	{
		string line;
		ifstream myfile("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Laptop.csv");
		if (myfile.is_open())
		{
			while (!myfile.eof())
			{
				getline(myfile, line);
				cout << line << endl;
			}
		}
		myfile.close();
	}
	else if (prod == "Headphones" || prod == "headphones")
	{
		string line;
		ifstream myfile("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Headphones.csv");
		if (myfile.is_open())
		{
			while (!myfile.eof())
			{
				getline(myfile, line);
				cout << line << endl;
			}
		}
		myfile.close();
	}
	else cout << "Unable to open file";
	system("pause");
	system("cls");
}

void addProduct::setNameCompany(const string & nameCompany)
{
	cout << "~~~~DEFAULT NO NAME COMPANY~~~~" << endl;
}

void addProduct::setModelProduct(const string& model)
{
	cout << "~~Default no model~~" << endl;
}

void addProduct::setYearManufacture(const string& date)
{
	cout << "~~Default no date manufacture~~" << endl;
}

void addProduct::sorting()
{
	system("cls");
	cout << "~~WORKED DEFAULT SORTING~~" << endl;
	system("pause");
	system("cls");
}

void addProduct::generateNumberProduct()
{}
