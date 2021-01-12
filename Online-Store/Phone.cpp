#include "Phone.h"

void Phone::input()
{
	system("cls");
	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Phone.csv", ios::app);
	cout << "~~~WORKED PHONE~~~" << endl;
	++phoneCounter;

	cout << "Enter name company:\t";
	cin >> nameCompany;
	setNamePhone(nameCompany);
	outData << nameCompany << endl;

	cout << "Enter charging phone:\t";
	cin >> charging;
	setChargingPhone(charging);
	outData << charging << endl;

	cout << "Enter color phone:\t";
	cin >> colorPhone;
	setColorPhone(colorPhone);
	outData << colorPhone << endl;

	cout << "Enter price mouse:\t";
	cin >> price;
	setPricePhone(price);
	outData << price << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printPhone();
}

void Phone::setNamePhone(const string& nameCompanyPhone)
{
	if (!nameCompanyPhone.empty())
		this->nameCompany = nameCompanyPhone;
	else
		cerr << "Error with name company phone" << endl;
}

void Phone::setChargingPhone(const string& connect)
{
	if (!connect.empty())
		this->charging = connect;
	else
		cerr << "Error with charging" << endl;
}

void Phone::setPricePhone(const string& pricePhone)
{
	if (!pricePhone.empty())
		this->price = pricePhone;
	else
		cerr << "Error with price phone" << endl;
}

void Phone::setColorPhone(const string& colorPhone)
{
	if (!colorPhone.empty())
		this->colorPhone = colorPhone;
	else
		cerr << "Error with color phone" << endl;
}

void Phone::printPhone() const
{
	system("cls");
	cout << "~~~~~~PHONE~~~~~~" << endl;
	cout << "Company name:\t" << nameCompany << endl;
	cout << "How to charging phone:\t" << charging << endl;
	cout << "Color phone:\t" << colorPhone << endl;
	cout << "Price phone:\t" << price << "$" << endl;
	cout << "Quantity phone:\t" << phoneCounter << "pieces" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	system("pause");
}
