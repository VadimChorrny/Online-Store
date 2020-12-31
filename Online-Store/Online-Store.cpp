#include "addProduct.h"
#include "DeleteProduct.h"
#include "Lib.h"

void del()
{
	DeleteProduct t;

	string elem;
	string str;
	cout << "Enter element wich need remove:\t" << endl;
	cin >> elem;
	cout << "Enter std:\t" << endl;
	cin >> str;
	t.deleteProduct(elem,str);
	
}

int main()
{
	addProduct d;
	d.input();
	d.print();

	cout << "______WORKED DELETE PRODUCT CLASS _____" << endl;

	del();
	d.print();

}