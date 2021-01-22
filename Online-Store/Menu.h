#pragma once
#include <iostream>
#include <string>
#include "addProduct.h"
using namespace std;

void AdminMenu()
{

	// 1. add Sorting
	// 2. delete element

	addProduct d;

	int action = 0;
	do
	{
		cout << " ________________________" << endl;
		cout << "|       SHOPING STORE    |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 1. ADD PRODUCT IN DB   |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 2. Generate code       |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 3.       EXIT          |" << endl;
		cout << "|------------------------|" << endl;
		cout << "Enter action ->\t";
		cin >> action;
		switch (action)
		{
		case 1:
		{
			system("cls");
			d.input();
		}break;
		case 2:
		{
			d.generateNumberProduct();
		}break;
		case 3:
		{
			system("cls");
		}break;
		}
	} while (action != 3);
}

void UserMenu()
{

}