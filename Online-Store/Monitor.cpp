#include "Monitor.h"

void Monitor::input()
{
	system("cls");
	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Monitor.csv", ios::app);
	cout << "~~~~~WORKED MONITOR~~~~~" << endl;
	++monitorCounter;

	cout << "Enter name company monitor:\t";
	cin >> name;
	setNameCompany(name);
	outData << name << endl;

	cout << "Enter model monitor:\t";
	cin >> model;
	setModelProduct(model);
	outData << model << endl;

	cout << "Enter year manufacture product:\t";
	cin >> date;
	setYearManufacture(date);
	outData << date << endl;


	cout << "Enter type monitor:\t";
	cin >> typeMonitor;
	setTypeMonitor(typeMonitor);
	outData << typeMonitor << endl;

	cout << "Enter type matrix:\t";
	cin >> typeMatrix;
	setTypeMatrix(typeMatrix);
	outData << typeMatrix << endl;

	cout << "Enter length monitor:\t";
	cin >> lengthMonitor;
	setLengthMonitor(lengthMonitor);
	outData << lengthMonitor << endl;

	cout << "Enter price for monitor:\t";
	cin >> priceMonitor;
	setPriceMonitor(priceMonitor);
	outData << priceMonitor << endl;

	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;

	printMonitor();
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
	cout << "Price:\t" << priceMonitor << "$" << endl;
	Monitor mon;
	mon.generateNumberProduct();
	cout << "~~~~~~~~~~~~~~~" << endl;
	system("pause");
	system("cls");
}