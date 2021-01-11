#include "addProduct.h"
#include "DeleteProduct.h"
#include "Lib.h"

// init

void add()
{
	addProduct d;
	int action = 0;
	do
	{
		cout << " ________________________" << endl;
		cout << "|       SHOPING STORE    |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 1. ADD PRODUCT IN DB   |" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 2. DELETE PRODUCT      |" << endl;
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
			system("cls");
		}
		}
	} while (action != 2);

}


int main()
{
	add();
}