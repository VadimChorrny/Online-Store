#include "addProduct.h"
#include "Keyboard.h"
#include "Lib.h"

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
		cout << "| 7.       EXIT          |" << endl;
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
			system("cls");
		}break;
		}
	} while (action != 5);

}


int main()
{
	add();
}
