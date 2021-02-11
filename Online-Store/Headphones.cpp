#include "Headphones.h"

void HeadPhones::input()
{
	CLEEN;
	cout << "~~~WORKED HEADPHONES~~~" << endl;
	cout << "Enter name company : ";
	cin >> nameCompany;
	cout << "Enter type : ";
	cin >> typeHeadphones;
	cout << "Enter model : ";
	cin >> model;
	cout << "Enter connect : ";
	cin.ignore();
	cin >> connect;
	cout << "Enter date : ";
	cin >> dates;
	cout << "Enter color : ";
	cin >> colorHeadPhones;
	cout << "Enter price : ";
	cin >> price;
	ofstream fout("Products\\Headphones.csv", ios::out | ios::app);
	if (fout.is_open())
	{
		fout << "-------" << nameCompany << "-------" << endl;
		fout << "Name company : " << "   " << '\"' << nameCompany << '\"' << endl;
		fout << "Type : " << "   " << '\"' << typeHeadphones << '\"' << endl;
		fout << "Model : " << "   " << '\"' << model << '\"' << endl;
		fout << "Connect: " << "   " << '\"' << connect << '\"' << endl;
		fout << "Date : " << date  << endl;
		fout << "Color : " << "   " << '\"' << colorHeadPhones << '\"' << endl;
		fout << "Price" << "   " << '\"' << price << '\"' << endl;
		fout << "-------" << nameCompany << "-------" << endl;
		fout << endl;
		cout << "data written successfully" << endl;
	}
	else
		cout << "Error: The file was not opened.";
	fout.close();
	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printHeadPhones();
}

void HeadPhones::deleteProducts()
{
	vector<string> result;
	string name, s;
	cin.ignore(32767, '\n');
	getline(cin, name);
	ifstream fout("Products\\Headphones.csv");
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
	ofstream fsut("Products\\Headphones.csv", std::ofstream::out | std::ofstream::trunc);
	fsut.close();
	ofstream fomt("Products\\Headphones.csv", ios::out | ios::app);
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

void HeadPhones::setYearManufacture(const string& date)
{
	if (!date.empty())
		this->date = date;
	else
		cerr << "Error with date headphones!" << endl;
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
	cout << "Type headphones : " << typeHeadphones;
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
