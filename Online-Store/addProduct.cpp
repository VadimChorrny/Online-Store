#include "addProduct.h"
#include "Keyboard.h"
#include "Mouse.h"
#include <ctime>
#include "Monitor.h"
#include "Phone.h"

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

void addProduct::setNameCompany(const string & nameCompany)
{
	cout << "~~~~DEFAULT NO NAME COMPANY~~~~" << endl;
}

void addProduct::generateSpecCode()
{
	vector<int> s;
	srand(time(NULL));

	int b = 20 + rand() % 20;
	system("cls");
	cout << "___________________GENERATE SECURITY CODE__________________" << endl;
	cout << "YOUR CODE IS ===>:\t";
	for (int a = 0; a <= b; a++)
	{
		int jmax = rand() % 20;
		s.push_back(jmax);
		cout << s[a];
	}
	cout << endl;
	cout << "___________________________________________________________" << endl;
	system("pause");
	system("cls");
}
