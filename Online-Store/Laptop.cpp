#include "Laptop.h"

void Laptop::input()
{
	CLEEN;
	cout << "~~~WORKED LAPTOP~~~" << endl;
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
	cout << "Enter color : ";
	cin >> colorLaptop;
	cout << "Enter price : ";
	cin >> price;
	ofstream fout("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Laptop.csv", ios::out | ios::app);
	if (fout.is_open())
	{
		fout << "-------" << nameCompany << "-------" << endl;
		fout << nameCompany  << "   " << '\"' << nameCompany << '\"' << endl;
		fout << type << "   " << '\"' << nameCompany << '\"' << endl;
		fout << model << "   " << '\"' << nameCompany << '\"' << endl;
		fout << charging << "   " << '\"' << nameCompany << '\"' << endl;
		fout << colorLaptop << "   " << '\"' << nameCompany << '\"' << endl;
		fout << price << "   " << '\"' << nameCompany << '\"' << endl;
		fout << "-------" << nameCompany << "-------" << endl;
		fout << endl;
		cout << "data written successfully" << endl;
	}
	else
		cout << "Error: The file was not opened.";
	fout.close();
	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printLaptop();
}

void Laptop::deleteProducts()
{
	vector<string> result;
	string name, s;
	cin.ignore(32767, '\n');
	getline(cin, name);
	ifstream fout("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Laptop.csv");
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
	ofstream fsut("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Laptop.csv", std::ofstream::out | std::ofstream::trunc);
	fsut.close();
	ofstream fomt("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Laptop.csv", ios::out | ios::app);
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

void Laptop::setYearManufacture(const string& date)
{
	if (!date.empty())
		this->date = date;
	else
		cerr << "Error with date laptop!" << endl;
}

void Laptop::setModelProduct(const string& model)
{
	if (!model.empty())
		this->model = model;
	else
		cerr << "Error with model laptop!" << endl;
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
