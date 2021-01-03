#include "addProduct.h"



addProduct::addProduct()
{
	product.nameProduct = "~~~~ Default no name ~~~~";
	product.typeProduct = "~~~~ Default no type ~~~~";
	product.priceProduct = "~~~ Default no price ~~~~";
}

addProduct::~addProduct()
{}

void addProduct::input()
{
	//ifstream in("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Name.txt");
	
	outData.open("Product-List.csv", ios::app);

	cout << endl;
	cout << "~~~~~~INPUT~~~~~~" << endl;
	cout << endl;

	cout << "Enter name product:\t" << endl;
	cin >> product.nameProduct;
	outData << product.nameProduct << endl;
	cout << endl;

	cout << "Enter type product:\t" << endl;
	cin >> product.typeProduct;
	outData << product.typeProduct << endl;
	cout << endl;
	
	cout << "Enter model product:\t" << endl;
	cin >> product.modelProduct;
	outData << product.modelProduct << endl;
	cout << endl;

	cout << "Enter price product:\t" << endl;
	cin >> product.priceProduct;
	outData << product.priceProduct << endl;
	cout << endl;
	
}


void addProduct::print() const
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

void addProduct::setModelProduct(const string& model)
{
	if (model != " ")
		this->product.modelProduct = model;
	else
		cerr << "Error with model" << endl;
}

void addProduct::setPriceProduct(const int& price)
{
	if (price != 0)
		this->product.priceProduct = price;
	else
		cerr << "Error with price" << endl;
}

