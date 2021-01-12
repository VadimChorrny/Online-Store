#include "addProduct.h"
#include "Keyboard.h"
#include "Mouse.h"
#include <ctime>
#include "Monitor.h"

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

	
}

void addProduct::print() const
{}

void addProduct::generateSpecCode()
{
	vector<int> s;
	srand(time(NULL));

	int b = 20 + rand() % 20;
	for (int a = 0; a <= b; a++)
	{

		int jmax = rand() % 20;

		s.push_back(jmax);
		cout << s[a];
	}
}
