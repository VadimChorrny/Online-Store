#include "Mouse.h"

void Mouse::input()
{
	system("cls");
	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Mouse.csv", ios::app);
	cout << "~~~WORKED MOUSE~~~" << endl;
	++mouseCounter;

	cout << "Enter type mouse:\t";
	cin >> typeMouse;
	setTypeMouse(typeMouse);
	outData << typeMouse << endl;

	cout << "Enter connect mouse:\t";
	cin >> connect;
	setConnectMouse(connect);
	outData << connect << endl;

	cout << "Enter color mouse:\t";
	cin >> color;
	setColorMouse(color);
	outData << color << endl;

	cout << "Enter max click mouse";
	cin >> MAX_CLICK;
	setMaxClickMouse(MAX_CLICK);
	outData << MAX_CLICK << endl;

	cout << "Enter price mouse:\t";
	cin >> price;
	setPriceMouse(price);
	outData << price << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printMouse();
}

void Mouse::setTypeMouse(const string& typeMouse)
{
	if (!typeMouse.empty())
		this->typeMouse = typeMouse;
	else
		cerr << "Error with type mouse" << endl;
}

void Mouse::setConnectMouse(const string& connect)
{
	if (!connect.empty())
		this->connect = connect;
	else
		cerr << "Error with connect mouse" << endl;
}

void Mouse::setMaxClickMouse(const size_t& MAX_CLICKED)
{
	if (MAX_CLICKED != 0)
		this->MAX_CLICK = MAX_CLICKED;
	else
		cerr << "Error with max clicked" << endl;

}

void Mouse::setPriceMouse(const string& priceMouse)
{
	if (priceMouse != " ")
		this->price = priceMouse;
	else
		cerr << "Error with price mouse" << endl;
}

void Mouse::setColorMouse(const string& colorMouse)
{
	if (!colorMouse.empty())
		this->color = colorMouse;
	else
		cerr << "Error with price mouse" << endl;
}

void Mouse::printMouse() const
{
	system("cls");
	cout << "~~~~Mouse Print~~~~" << endl;
	cout << "Type mouse:\t" << typeMouse << endl;
	cout << "Connect mouse:\t" << connect << endl;
	cout << "Color mouse:\t" << color << endl;
	cout << "Max click:\t" << MAX_CLICK << endl;
	cout << "Mouse price:\t" << price << "$" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~" << endl;
	system("pause");
	system("cls");
}