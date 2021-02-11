#include "Monitor.h"

void Monitor::input()
{
	CLEEN;
	cout << "~~~WORKED MONITOR~~~" << endl;
	cout << "Enter name company : ";
	cin >> name;
	cout << "Enter type monitor : ";
	cin >> typeMonitor;

	cout << "Enter length monitor : ";
	cin >> lengthMonitor;

	cout << "Enter type matrix : ";
	cin >> typeMatrix;

	cout << "Enter model : ";
	cin >> model;
	cout << "Enter connect : ";
	cin.ignore();
	cin >> connect;
	cout << "Enter date : ";
	cin >> date;

	cout << "Enter price : ";
	cin >> priceMonitor;
	ofstream fout("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Monitor.csv", ios::out | ios::app);
	if (fout.is_open())
	{
		fout << "-------" << name << "-------" << endl;
		fout << name << "   " << '\"' << name << '\"' << endl;
		fout << typeMonitor << "   " << '\"' << name << '\"' << endl;
		fout << typeMatrix << "   " << '\"' << name << '\"' << endl;
		fout << model << "   " << '\"' << name << '\"' << endl;
		fout << connect << "   " << '\"' << name << '\"' << endl;
		fout << date << '\"' << name << '\"' << endl;
		fout << lengthMonitor << "   " << '\"' << name << '\"' << endl;
		fout << priceMonitor << "   " << '\"' << name << '\"' << endl;
		fout << "-------" << name << "-------" << endl;
		fout << endl;
		cout << "data written successfully" << endl;
	}
	else
		cout << "Error: The file was not opened.";
	fout.close();
	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printMonitor();
}

void Monitor::deleteProducts()
{
	vector<string> result;
	string name, s;
	cin.ignore(32767, '\n');
	getline(cin, name);
	ifstream fout("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Monitor.csv");
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
	ofstream fsut("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Monitor.csv", std::ofstream::out | std::ofstream::trunc);
	fsut.close();
	ofstream fomt("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Monitor.csv", ios::out | ios::app);
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

void Monitor::setNameCompany(const string& nameCompany)
{
	if (!nameCompany.empty())
		this->name = nameCompany;
	else
		cerr << "Error with name company monitor" << endl;
}

void Monitor::setModelProduct(const string& model)
{
	if (!model.empty())
		this->model = model;
	else
		cerr << "Error with model monitor!" << endl;
}

void Monitor::setYearManufacture(const string& date)
{
	if (!date.empty())
		this->date = date;
	else
		cerr << "Error with date!" << endl;
}

void Monitor::generateNumberProduct()
{
	vector<int> s;
	srand(time(NULL));

	int b = 10;
	system("cls");
	cout << "___________________GENERATE SECURITY CODE__________________" << endl;
	cout << "YOUR CODE IS ===>:\t";
	for (int a = 0; a <= b; a++)
	{
		int jmax = rand() % 10;
		s.push_back(jmax);
		cout << s[a];
	}
	cout << endl;
	cout << "___________________________________________________________" << endl;
	system("pause");
	system("cls");
}

void Monitor::setTypeMonitor(const string& typeMonitor)
{
	if (!typeMonitor.empty())
		this->typeMonitor = typeMonitor;
	else
		cerr << "Error with type monitor" << endl;
}

void Monitor::setLengthMonitor(const size_t& lengthMonitor)
{
	if (lengthMonitor != 0)
		this->lengthMonitor = lengthMonitor;
	else
		cerr << "Error with length monitor" << endl;
}

void Monitor::setTypeMatrix(const string& typeMatrix)
{
	if (!typeMatrix.empty())
		this->typeMatrix = typeMatrix;
	else
		cerr << "Error with type matrix" << endl;
}

void Monitor::setPriceMonitor(const size_t& priceMonitor)
{
	if (priceMonitor != 0)
		this->priceMonitor = priceMonitor;
	else
		cerr << "Error with price monitor" << endl;
}

void Monitor::printMonitor() const
{
	system("cls");
	cout << "~~~~MONITOR~~~~" << endl;
	cout << "Company name monitor:\t" << name << endl;
	cout << "Type monitor:\t" << typeMonitor << endl;
	cout << "Type matrix:\t" << typeMatrix << endl;
	cout << "Length monitor:\t" << lengthMonitor << "dm" << endl;
	cout << "Date : " << date;
	cout << "Model : " << model << endl;
	cout << "Price:\t" << priceMonitor << "$" << endl;
	Monitor mon;
	mon.generateNumberProduct();
	cout << "~~~~~~~~~~~~~~~" << endl;
	system("pause");
	system("cls");
}