#include "addProduct.h"
#include "DeleteProduct.h"
#include "Lib.h"

// init
addProduct d;

void add()
{
	d.input();
	d.print();
}

int main()
{
	int action = 0;

	do
	{
		cout << " ________________________" << endl;
		cout << "|       SHOPING STORE    |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 1. ADD PRODUCT IN DB   |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 2.       EXIT          |" << endl;
		cout << "|------------------------|" << endl;
		cout << "Enter action ->\t";
		cin >> action;
		switch (action)
		{
		case 1: 
		{
			system("cls");
			add();
		}break;
		case 2:
		{
			system("cls");
		}
		}
	} while (action != 2);

}