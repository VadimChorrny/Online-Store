#include "Keyboard.h"

void Keyboard::input()
{
	system("cls");
	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv", ios::app);
	++keyboardCounter;
	cout << "~~~WORKED KEYBOARD~~~" << endl;
	cout << "Enter type keyboard:\t";
	cin >> typeKeyboard;
	setTypeKeyboard(typeKeyboard);
	outData << typeKeyboard << endl;

	cout << "Enter how connect keyboard:\t";
	cin >> connect;
	setConnectKeyboard(connect);
	outData << connect << endl;

	cout << "Enter color keyboard:\t";
	cin >> colorKeyboard;
	setColorKeyboard(colorKeyboard);
	outData << colorKeyboard << endl;


	cout << "Enter price keyboard:\t";
	cin >> price;
	setPriceKeyboard(price);
	outData << price << endl;

	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printKeyboard();
}

void Keyboard::setTypeKeyboard(const string& typeKeyboard)
{

	if (!typeKeyboard.empty())
		this->typeKeyboard = typeKeyboard;
	else
		cerr << "error with type keyboard" << endl;
	// NEED ADD ELSE IF

}

void Keyboard::setConnectKeyboard(const string& connect)
{
	if (!connect.empty())
		this->connect = connect;
	else
		cout << "error with connect keyboard" << endl;
}

void Keyboard::setPriceKeyboard(const string& priceKeyboard)
{
	if (priceKeyboard != " ")
		this->price = priceKeyboard;
	else
		cerr << "error with price keyboard" << endl;
}

void Keyboard::setColorKeyboard(const string& colorKeyboard)
{
	if (!colorKeyboard.empty())
		this->colorKeyboard = colorKeyboard;
	else
		cerr << "error with color keyboard" << endl;
}

void Keyboard::printKeyboard() const
{
	system("cls");
	cout << "~~~~~~KEYBOARD~~~~~~" << endl;
	cout << "Type keyboard:\t" << typeKeyboard << endl;
	cout << "How to connect keyboard:\t" << connect << endl;
	cout << "Color keyboard:\t" << colorKeyboard << endl;
	cout << "Price keyboard:\t" << price << "$" << endl;
	cout << "Quantity keyboard:\t" << keyboardCounter << "pieces" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	system("pause");
}