#include "addProduct.h"
#include "Keyboard.h"
#include "Lib.h"
#include "Menu.h"

int main()
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