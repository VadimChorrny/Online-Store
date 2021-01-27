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
	else if (product.typeProduct == "Test" || product.typeProduct == "test")
	{
		string	test;
		cout << "Enter test : ";
		cin >> test;
		outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Test.csv", ios::app);
		outData << test << endl;
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
	string answer;
	cout << "Enter type product that her sorting : ";
	cin >> answer;
	if (answer == "Keyboard" || answer == "keyboard")
	{
		string nameFile = "C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv";
		vector<string> buff;
		{

			string line;
			ifstream file(nameFile);
			while (getline(file, line)) {
				buff.push_back(line);
				if (line == "exit") {
					system("cls");
				}
			}


		}
		sort(buff.begin(), buff.end());
		{
			ofstream file(nameFile, ios::out | ios::trunc);
			for (auto& str : buff)
				file << str << endl;
			cout << "File was sorted!" << endl;
			cout << "Enter 'exit' for exit apps" << endl;

		}
	}
	else if (answer == "Mouse" || answer == "mouse")
	{
		string nameFile = "C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Mouse.csv";
		vector<string> buff;
		{

			string line;
			ifstream file(nameFile);
			while (getline(file, line)) {
				buff.push_back(line);
				if (line == "exit") {
					system("cls");
				}
			}


		}
		sort(buff.begin(), buff.end());
		{
			ofstream file(nameFile, ios::out | ios::trunc);
			for (auto& str : buff)
				file << str << endl;
			cout << "File was sorted!" << endl;
			cout << "Enter 'exit' for exit apps" << endl;

		}
	}
	else if (answer == "Monitor" || answer == "monitor")
	{
		string nameFile = "C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Monitor.csv";
		vector<string> buff;
		{

			string line;
			ifstream file(nameFile);
			while (getline(file, line)) {
				buff.push_back(line);
				if (line == "exit") {
					system("cls");
				}
			}


		}
		sort(buff.begin(), buff.end());
		{
			ofstream file(nameFile, ios::out | ios::trunc);
			for (auto& str : buff)
				file << str << endl;
			cout << "File was sorted!" << endl;
			cout << "Enter 'exit' for exit apps" << endl;

		}
	}
	else if (answer == "Phone" || answer == "phone")
	{
		string nameFile = "C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Phone.csv";
		vector<string> buff;
		{

			string line;
			ifstream file(nameFile);
			while (getline(file, line)) {
				buff.push_back(line);
				if (line == "exit") {
					system("cls");
				}
			}


		}
		sort(buff.begin(), buff.end());
		{
			ofstream file(nameFile, ios::out | ios::trunc);
			for (auto& str : buff)
				file << str << endl;
			cout << "File was sorted!" << endl;
			cout << "Enter 'exit' for exit apps" << endl;

		}
	}
	else if (answer == "Tablet" || answer == "tablet")
	{
		string nameFile = "C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Tablet.csv";
		vector<string> buff;
		{

			string line;
			ifstream file(nameFile);
			while (getline(file, line)) {
				buff.push_back(line);
				if (line == "exit") {
					system("cls");
				}
			}


		}
		sort(buff.begin(), buff.end());
		{
			ofstream file(nameFile, ios::out | ios::trunc);
			for (auto& str : buff)
				file << str << endl;
			cout << "File was sorted!" << endl;
			cout << "Enter 'exit' for exit apps" << endl;

		}
	}
	else if (answer == "Laptop" || answer == "laptop")
	{
		string nameFile = "C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Laptop.csv";
		vector<string> buff;
		{

			string line;
			ifstream file(nameFile);
			while (getline(file, line)) {
				buff.push_back(line);
				if (line == "exit") {
					system("cls");
				}
			}


		}
		sort(buff.begin(), buff.end());
		{
			ofstream file(nameFile, ios::out | ios::trunc);
			for (auto& str : buff)
				file << str << endl;
			cout << "File was sorted!" << endl;
			cout << "Enter 'exit' for exit apps" << endl;

		}
	}
	else if (answer == "Headphones" || answer == "headphones")
	{
		string nameFile = "C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Headphones.csv";
		vector<string> buff;
		{

			string line;
			ifstream file(nameFile);
			while (getline(file, line)) {
				buff.push_back(line);
				if (line == "exit") {
					system("cls");
				}
			}


		}
		sort(buff.begin(), buff.end());
		{
			ofstream file(nameFile, ios::out | ios::trunc);
			for (auto& str : buff)
				file << str << endl;
			cout << "File was sorted!" << endl;
			cout << "Enter 'exit' for exit apps" << endl;

		}
	}
	else cout << "Error with type products!" << endl;
}
void addProduct::deleteProduct()
{
	// !!!CHANGE!!!
	// it's function delete all...
	ofstream f("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Phone.csv");
	f.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Phone.csv", ofstream::binary | ofstream::out | ofstream::in);
	f.seekp(1);
	f.close();

	// delete file
	//remove("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Phone.csv");

	//f.write("zxc", 3);
}
void addProduct::deleteFileWithProduct()
{
	string file;
	system("cls");
	cout << "Enter name file that delete : ";
	cin >> file;
	if (file == "Keyboard" || file == "keyboard")
		remove("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv");
	else if (file == "Mouse" || file == "mouse")
		remove("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Mouse.csv");
	else if (file == "Monitor" || file == "monitor")
		remove("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Monitor.csv");
	else if (file == "Phone" || file == "phone")
		remove("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Phone.csv");
	else if (file == "Tablet" || file == "tablet")
		remove("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Tablet.csv");
	else if (file == "Laptop" || file == "laptop")
		remove("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Laptop.csv");
	else if (file == "Headphones" || file == "headphones")
		remove("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Phone.csv");
	else if (file == "Test" || file == "test")
		remove("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Test.csv");
	else
		cerr << "error with delete file" << endl;
}
void addProduct::generateNumberProduct()
{}
