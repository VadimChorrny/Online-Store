#include "Laptop.h"

void Laptop::input()
{
	system("cls");
	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Laptop.csv", ios::app);
	cout << "~~~WORKED LAPTOP~~~" << endl;
	++laptopCounter;

	cout << "Enter name company:\t";
	cin >> nameCompany;
	setNameCompany(nameCompany);
	outData << nameCompany << endl;

	cout << "Enter charging Laptop:\t";
	cin >> charging;
	setChargingLaptop(charging);
	outData << charging << endl;

	cout << "Enter color Laptop:\t";
	cin >> colorLaptop;
	setColorLaptop(colorLaptop);
	outData << colorLaptop << endl;

	cout << "Enter price Laptop:\t";
	cin >> price;
	setPriceLaptop(price);
	outData << price << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printLaptop();
}

void Laptop::setNameCompany(const string& nameCompanyLaptop)
{
	if (!nameCompanyLaptop.empty())
		this->nameCompany = nameCompanyLaptop;
	else
		cerr << "Error with name company Laptop" << endl;
}

void Laptop::generateNumberProduct()
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

void Laptop::setChargingLaptop(const string& connect)
{
	if (!connect.empty())
		this->charging = connect;
	else
		cerr << "Error with charging" << endl;
}

void Laptop::setPriceLaptop(const string& priceLaptop)
{
	if (!priceLaptop.empty())
		this->price = priceLaptop;
	else
		cerr << "Error with price Laptop" << endl;
}

void Laptop::setColorLaptop(const string& colorLaptop)
{
	if (!colorLaptop.empty())
		this->colorLaptop = colorLaptop;
	else
		cerr << "Error with color Laptop" << endl;
}

void Laptop::printLaptop() const
{
	system("cls");
	cout << "~~~~~~LAPTOP~~~~~~" << endl;
	cout << "Company name:\t" << nameCompany << endl;
	cout << "How to charging Laptop:\t" << charging << endl;
	cout << "Color Laptop:\t" << colorLaptop << endl;
	cout << "Price Laptop:\t" << price << "$" << endl;
	cout << "Quantity Laptop:\t" << laptopCounter << "pieces" << endl;
	Laptop lap;
	lap.generateNumberProduct();
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	system("pause");
	system("cls");
}
