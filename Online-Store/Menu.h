#pragma once
#include <iostream>
#include <string>
#include "Product.h"
#include "buyProduct.h"
#include "windows.h"
using namespace std;          

// start init 
void UserMenu();

// for show admin menu
void AdminMenu()
{
	Product d;
	int action = 0;
	do
	{
		cout << " ________________________" << endl;
		cout << "|    ADMIN PANEL STORE   |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 1. ADD PRODUCT IN DB   |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 2. Delete product      |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 3. Generate code       |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 4. Show products       |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 5. Sorting             |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 6. Delete file         |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 7. USER MENU           |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 8.       EXIT          |" << endl;
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
			system("cls");
			d.deleteProduct();
		}
		case 3:
		{
			d.generateNumberProduct();
		}break;
		case 4:
		{
			d.showAllProducts();
		}break;
		case 5:
		{
			d.sorting();
		}break;
		case 6:
		{
			d.deleteFileWithProduct();
		}break;
		case 7:
		{
			UserMenu();
			CLEEN;
		}break;
		case 8:
		{
			CLEEN;
		}
		}
	} while (action != 8);
}

// for show user menu
void UserMenu()
{
	buyProduct buy;
	Product d;
	int action = 0;
	do
	{
		CLEEN;
		cout << " ________________________" << endl;
		cout << "|   USER SHOPING STORE   |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 1. Show products       |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 2. Buy products        |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 3. Sorting             |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 4. ADMIN PANEL         |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 5.       EXIT          |" << endl;
		cout << "|------------------------|" << endl;
		cout << "Enter action ->\t";
		cin >> action;
		switch (action)
		{
		case 1:
		{
			CLEEN;
			d.showAllProducts();
		}break;
		case 2:
		{
			CLEEN;
			buy.deleteProduct();
		}
		case 3:
		{
			d.sorting();
		}break;
		case 4:
		{
			CLEEN;
			// add hard system
			string log,pass;
			cout << "Enter login : "; cin >> log;
			if (log == "admin")
			{
				CLEEN;
				cout << "Enter password : "; cin >> pass;
				CLEEN;
				if (pass == "admin")
					AdminMenu();
				else
					ERROR;
			}
			else
				ERROR;

		}break;
		case 5:
		{
			cout << "Chao!" << endl;
			CLEEN;
		}break;
		}
	} while (action != 5);
}

// for login
void Login()
{
	string action;
	cout << "============" << endl;
	cout << "1.  ADMIN   " << endl;
	cout << "2.  USER    " << endl;
	cout << "============" << endl;
	cout << "Enter variant login : "; cin >> action;
	CLEEN;
	if (action == "Admin" || action == "admin" || action == "1")
	{
		CLEEN;
		// add hard system
		string log, pass;
		cout << "Enter login : "; cin >> log;
		if (log == "admin")
		{
			CLEEN;
			cout << "Enter password : "; cin >> pass;
			CLEEN;
			if (pass == "admin")
				AdminMenu();
			else
				ERROR;
		}
		else
			ERROR;
	}

	else if (action == "User" || action == "user" || action == "2")
		UserMenu();
	else
		cerr << "Error with login!!!" << endl;
}

// 1 - зробити запис для кожного користувача
