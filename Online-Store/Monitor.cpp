#include "Monitor.h"

void Monitor::input()
{
	system("cls");
	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Monitor.csv", ios::app);
	cout << "~~~~~WORKED MONITOR~~~~~" << endl;
	++monitorCounter;

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
	cout << "Type monitor:\t" << typeMonitor << endl;
	cout << "Type matrix:\t" << typeMatrix << endl;
	cout << "Length monitor:\t" << lengthMonitor << "dm" << endl;
	cout << "Price:\t" << priceMonitor << "$" << endl;
	system("pause");
	system("cls");
}