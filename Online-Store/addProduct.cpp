#include "addProduct.h"



addProduct::addProduct()
{
	product.nameProduct = "~~~~default no name~~~~";
	product.typeProduct = "~~~~default no type~~~~";
	product.priceProduct = "~~~~default no price~~~~";
}

addProduct::~addProduct()
{
}

void addProduct::input()
{
	//ifstream in("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Name.txt");
	

	cout << endl;
	cout << "~~~~~~INPUT~~~~~~" << endl;
	cout << endl;

	cout << "Enter name product:\t" << endl;
	cin >> product.nameProduct;
	n.push_back(product.nameProduct);
	cout << endl;

	cout << "Enter type product:\t" << endl;
	cin >> product.typeProduct;
	n.push_back(product.typeProduct);
	cout << endl;

	cout << "Enter price product:\t" << endl;
	cin >> product.priceProduct;
	n.push_back(product.priceProduct);
	cout << endl;
	
}


void addProduct::print()
{
	system("cls");
	cout << "~~~~~~OUTPUT~~~~~~" << endl;
	cout << "NAME PRODUCT:\t" << product.nameProduct << endl;
	cout << "TYPE PRODUCT:\t" << product.typeProduct << endl;
	cout << "PRICE PRODUCT:\t" << product.priceProduct << "$"<< endl;

	cout << "~~~~~~TESTING VECTOR~~~~~~" << endl;
	
	cout << "Size:\t" << n.size() << "\n";
	cout << "Capacity:\t" << n.capacity() << "\n";
	
}

void addProduct::setNameProduct(const string& name)
{
	if (name != " ")
		this->product.nameProduct = name;
	else
		cerr << "Error with name product!" << endl;
}

void addProduct::setTypeProduct(const string& type)
{
	if (type != " ")
		this->product.typeProduct = type;
	else
		cerr << " Error with type " << endl;

	
}

void addProduct::setPriceProduct(const int& price)
{
	if (price != 0)
		this->product.priceProduct = price;
	else
		cerr << "Error with price" << endl;
}

void addProduct::sortProduct()
{
	sort(n.begin(), n.end());	
	// output after sorting 
}
