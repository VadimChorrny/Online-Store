#include "Headphones.h"

void HeadPhones::input()
{
	system("cls");
	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Headphones.csv", ios::app);
	cout << "~~~WORKED HEADPHONES~~~" << endl;
	++headphonesCounter;

	cout << "Enter name company:\t";
	cin >> nameCompany;
	setNameCompany(nameCompany);
	outData << nameCompany << endl;

	cout << "Enter connect to HeadPhones:\t";
	cin >> connect;
	setConnectHeadPhones(connect);
	outData << connect << endl;

	cout << "Enter color HeadPhones:\t";
	cin >> colorHeadPhones;
	setColorHeadPhones(colorHeadPhones);
	outData << colorHeadPhones << endl;

	cout << "Enter price HeadPhones:\t";
	cin >> price;
	setPriceHeadPhones(price);
	outData << price << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printHeadPhones();
}

void HeadPhones::setNameCompany(const string& nameCompany)
{
	if (!nameCompany.empty())
		this->nameCompany = nameCompany;
	else
		cerr << "Error with name company HeadPhones" << endl;
}

void HeadPhones::setModelProduct(const string& model)
{
	if (!model.empty())
		this->model = model;
	else
		cerr << "Error with model!" << endl;
}

void HeadPhones::generateNumberProduct()
{
	int b = 10;
	cout << "Product number:\t";
	for (int a = 0; a <= b; a++)
	{
		int jmax = rand() % 10;
		num.push_back(jmax);
		cout << num[a];
	}
	cout << endl;
}

void HeadPhones::setConnectHeadPhones(const string& connect)
{
	if (!connect.empty())
		this->connect = connect;
	else
		cerr << "Error with connect" << endl;
}

void HeadPhones::setPriceHeadPhones(const string& priceHeadPhones)
{
	if (!priceHeadPhones.empty())
		this->price = priceHeadPhones;
	else
		cerr << "Error with price HeadPhones" << endl;
}

void HeadPhones::setColorHeadPhones(const string& colorHeadPhones)
{
	if (!colorHeadPhones.empty())
		this->colorHeadPhones = colorHeadPhones;
	else
		cerr << "Error with color Laptop" << endl;
}

void HeadPhones::printHeadPhones() const
{
	system("cls");
	cout << "~~~~~~HEADPHONES~~~~~~" << endl;
	cout << "Company name:\t" << nameCompany << endl;
	cout << "Connect to HeadPhones:\t" << connect << endl;
	cout << "Color HeadPhones:\t" << colorHeadPhones << endl;
	cout << "Price HeadPhones:\t" << price << "$" << endl;
	cout << "Quantity HeadPhones:\t" << headphonesCounter << "pieces" << endl;
	HeadPhones head;
	head.generateNumberProduct();
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	system("pause");
	system("cls");
}
