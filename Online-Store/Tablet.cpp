#include "Tablet.h"

void Tablet::input()
{
	CLEEN;
	cout << "~~~WORKED PHONE~~~" << endl;
	cout << "Enter name company : ";
	cin >> nameCompany;
	cout << "Enter type : ";
	cin >> type;
	cout << "Enter model : ";
	cin >> model;
	cout << "Enter connect : ";
	cin.ignore();
	cin >> charging;
	cout << "Enter date : ";
	cin >> date;

	cout << "Enter color phone : ";
	cin >> colorTablet;

	cout << "Enter price : ";
	cin >> price;
	ofstream fout("Products\\Tablet.csv", ios::out | ios::app);
	if (fout.is_open())
	{
		fout << "-------" << nameCompany << "-------" << endl;
		fout << nameCompany << "   " << '\"' << nameCompany << '\"' << endl;
		fout << type << "   " << '\"' << nameCompany << '\"' << endl;
		fout << model << "   " << '\"' << nameCompany << '\"' << endl;
		fout << charging << "   " << '\"' << nameCompany << '\"' << endl;
		fout << date << '\"' << nameCompany << '\"' << endl;
		fout << colorTablet << "   " << '\"' << nameCompany << '\"' << endl;
		fout << price << "   " << '\"' << nameCompany << '\"' << endl;
		fout << "-------" << nameCompany << "-------" << endl;
		fout << endl;
		cout << "data written successfully" << endl;
	}
	else
		cout << "Error: The file was not opened.";
	fout.close();
	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printTablet();
}

void Tablet::deleteProducts()
{
	vector<string> result;
	string name, s;
	cin.ignore(32767, '\n');
	getline(cin, name);
	ifstream fout("Products\\Tablet.csv");
	if (fout.is_open())
	{
		while (getline(fout, s))
		{
			if (s.find(name) == string::npos)
				result.push_back(s);
		}
	}
	else
		cerr << "Error: The file was not opened." << endl;
	fout.close();
	ofstream fsut("Products\\Tablet.csv", std::ofstream::out | std::ofstream::trunc);
	fsut.close();
	ofstream fomt("Products\\Tablet.csv", ios::out | ios::app);
	if (fomt.is_open())
	{
		for (int i = 0; i < result.size(); i++)
			fomt << result[i] << endl;
		cout << "Information deleted" << endl;
		system("pause");
		fomt.close();
	}
	else
		cerr << "Error: The file was not opened." << endl;
	fout.close();
}

void Tablet::setNameCompany(const string& nameCompanyTablet)
{
	if (!nameCompanyTablet.empty())
		this->nameCompany = nameCompanyTablet;
	else
		cerr << "Error with name company tablet" << endl;
}

void Tablet::setModelProduct(const string& model)
{
	if (!model.empty())
		this->model = model;
	else
		cerr << "Error with tablet!" << endl;
}

void Tablet::setYearManufacture(const string& date)
{
	if (!date.empty())
		this->date = date;
	else
		cerr << "Error with date tablet!" << endl;
}

void Tablet::generateNumberProduct()
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
	Tablet tab;
	tab.generateNumberProduct();
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	system("pause");
	system("cls");
}
