#include "Phone.h"

void Phone::input()
{
	cin.ignore();
	CLEEN;
	cout << "~~~WORKED PHONE~~~" << endl;
	cout << "Enter name company : ";
	getline(cin, nameCompany);
	cout << "Enter type phone : ";
	getline(cin,type);
	cout << "Enter model : ";

	getline(cin, model);
	cout << "Enter connect : ";

	getline(cin, charging);

	cout << "Enter date : ";

	getline(cin, date);

	cout << "Enter color phone : ";

	getline(cin, colorPhone);

	cout << "Enter price : ";

	getline(cin, price);
	ofstream fout("Products\\Phone.csv", ios::out | ios::app);
	if (fout.is_open())
	{
		fout << "-------" << nameCompany << "-------" << endl;
		fout << "Name company : " << nameCompany << "   " << '\"' << nameCompany << '\"' << endl;
		fout << "Type : " << type << "   " << '\"' << nameCompany << '\"' << endl;
		fout <<  "Model : " << model << "   " << '\"' << nameCompany << '\"' << endl;
		fout << "Charging : " << charging << "   " << '\"' << nameCompany << '\"' << endl;
		fout << "Date manufacture : " << date << '\"' << nameCompany << '\"' << endl;
		fout << "Color phone : " << colorPhone  << "   " << '\"' << nameCompany << '\"' << endl;
		fout << "Price : " << price << "   " << '\"' << nameCompany << '\"' << endl;
		fout << "-------" << nameCompany << "-------" << endl;
		fout << endl;
		cout << "data written successfully" << endl;
	}
	else
		cout << "Error: The file was not opened.";
	fout.close();
	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printPhone();
}

void Phone::deleteProducts()
{
	vector<string> result;
	string name, s;
	cin.ignore(32767, '\n');
	getline(cin, name);
	ifstream fout("Products\\Phone.csv");
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
	ofstream fsut("Products\\Phone.csv", std::ofstream::out | std::ofstream::trunc);
	fsut.close();
	ofstream fomt("Products\\Phone.csv", ios::out | ios::app);
	if (fomt.is_open())
	{
		for (int i = 0; i < result.size(); i++)
			fomt << result[i] << endl;
		cout << "Information deleted" << endl;
		system("pause");
		fomt.close();
	}
	else
		cerr << "error" << endl;
	fout.close();
}

void Phone::setNameCompany(const string& nameCompany)
{
	if (!nameCompany.empty())
		this->nameCompany = nameCompany;
	else
		cerr << "Error with name company phone" << endl;
}

void Phone::setModelProduct(const string& model)
{
	if (!model.empty())
		this->model = model;
	else
		cerr << "Error with model phone!" << endl;
}

void Phone::setYearManufacture(const string& date)
{
	if (!date.empty())
		this->date = date;
	else
		cerr << "Error with date phone!" << endl;
}

void Phone::generateNumberProduct()
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
	Phone phone;
	phone.generateNumberProduct();
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	system("pause");
	system("cls");
}
