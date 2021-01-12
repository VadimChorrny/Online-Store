#include "Tablet.h"

#include "Tablet.h"

void Tablet::input()
{
	system("cls");
	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Tablet.csv", ios::app);
	cout << "~~~WORKED TABLET~~~" << endl;
	++tabletCounter;

	cout << "Enter name company:\t";
	cin >> nameCompany;
	setNameTablet(nameCompany);
	outData << nameCompany << endl;

	cout << "Enter charging tablet:\t";
	cin >> charging;
	setChargingTablet(charging);
	outData << charging << endl;

	cout << "Enter color tablet:\t";
	cin >> colorTablet;
	setColorTablet(colorTablet);
	outData << colorTablet << endl;

	cout << "Enter price tablet:\t";
	cin >> price;
	setPriceTablet(price);
	outData << price << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printTablet();
}

void Tablet::setNameTablet(const string& nameCompanyTablet)
{
	if (!nameCompanyTablet.empty())
		this->nameCompany = nameCompanyTablet;
	else
		cerr << "Error with name company tablet" << endl;
}

void Tablet::setChargingTablet(const string& connect)
{
	if (!connect.empty())
		this->charging = connect;
	else
		cerr << "Error with charging" << endl;
}

void Tablet::setPriceTablet(const string& priceTablet)
{
	if (!priceTablet.empty())
		this->price = priceTablet;
	else
		cerr << "Error with price Tablet" << endl;
}

void Tablet::setColorTablet(const string& colorTablet)
{
	if (!colorTablet.empty())
		this->colorTablet = colorTablet;
	else
		cerr << "Error with color Tablet" << endl;
}

void Tablet::printTablet() const
{
	system("cls");
	cout << "~~~~~~TABLET~~~~~~" << endl;
	cout << "Company name:\t" << nameCompany << endl;
	cout << "How to charging tablet:\t" << charging << endl;
	cout << "Color tablet:\t" << colorTablet << endl;
	cout << "Price tablet:\t" << price << "$" << endl;
	cout << "Quantity tablet:\t" << tabletCounter << "pieces" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	system("pause");
	system("cls");
}
