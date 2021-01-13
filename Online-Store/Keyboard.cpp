#include "Keyboard.h"

void Keyboard::input()
{
	system("cls");
	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv", ios::app);
	++keyboardCounter;
	cout << "~~~WORKED KEYBOARD~~~" << endl;

	cout << "Enter name company keyboard:\t";
	cin >> nameCompany;
	setNameCompany(nameCompany);
	outData << nameCompany << endl;

	cout << "Enter model keyboard:\t";
	cin >> model;
	setModelProduct(model);
	outData << model << endl;

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

void Keyboard::setNameCompany(const string& nameCompany)
{
	if (!nameCompany.empty())
		this->nameCompany = nameCompany;
	else
		cerr << "Error with name company keyboard" << endl;
}

void Keyboard::setModelProduct(const string& model)
{
	if (!model.empty())
		this->model = model;
	else
		cerr << "Error with model keyboard" << endl;
}

void Keyboard::generateNumberProduct()
{

	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv", ios::app);

	srand(time(NULL));

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
	cout << "Company name:\t" << nameCompany << endl;
	cout << "How to connect keyboard:\t" << connect << endl;
	cout << "Color keyboard:\t" << colorKeyboard << endl;
	cout << "Price keyboard:\t" << price << "$" << endl;
	Keyboard key;
	key.generateNumberProduct();
	/*cout << "Quantity keyboard:\t" << keyboardCounter << "pieces" << endl;*/
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	system("pause");
}