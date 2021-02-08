#include "Keyboard.h"

void Keyboard::input()
{
	system("cls");
	/*cout << "~~~WORKED KEYBOARD~~~" << endl;
	
	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv", ios::app);

	cout << "Enter name company keyboard:\t";
	cin >> d.nameCompany;
	setNameCompany(d.nameCompany);
	name_.push_back(d.nameCompany);
	string line = "--------------------";
	outData << line << endl;
	outData << d.nameCompany << endl;
	cout << "Enter model keyboard:\t";
	cin >> d.model;
	setModelProduct(d.model);
	model_.push_back(d.model);
	outData << d.model << endl;

	cout << "Enter date manufacture product:\t";
	cin >> d.date;
	setYearManufacture(d.date);
	yearManufacture_.push_back(d.date);
	outData << d.date << endl;


	cout << "Enter type keyboard:\t";
	cin >> d.typeKeyboard;
	setTypeKeyboard(d.typeKeyboard);
	typeKeyboard_.push_back(d.typeKeyboard);
	outData << d.typeKeyboard << endl;


	cout << "Enter how connect keyboard:\t";
	cin >> d.connect;
	setConnectKeyboard(d.connect);
	connect_.push_back(d.connect);
	outData << d.connect << endl;

	cout << "Enter color keyboard:\t";
	cin >> d.colorKeyboard;
	setColorKeyboard(d.colorKeyboard);
	color_.push_back(d.colorKeyboard);
	outData << d.colorKeyboard << endl;

	cout << "Enter price keyboard:\t";
	cin >> d.price;
	setPriceKeyboard(d.price);
	price_.push_back(d.price);
	outData << d.price << endl;
	outData << line << endl;

	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;*/

	cin.ignore(32767, '\n');
	cout << "Enter name company : ";
	cin >> d.nameCompany;
	cout << "Enter type : ";
	cin >> d.typeKeyboard;
	cout << "Enter model : ";
	cin >> d.model;
	cout << "Enter connect : ";
	cin.ignore();
	cin >> d.connect;
	cout << "Enter date : ";
	cin >> d.date;
	cout << "Enter color : ";
	cin >> d.colorKeyboard;
	cout << "Enter price : ";
	cin >> d.price;
	ofstream fout("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv", ios::out | ios::app);
	if (fout.is_open())
	{
		fout << "-------" << d.nameCompany << "-------" << endl;
		fout << d.typeKeyboard << "   " << '\"' << d.nameCompany << '\"' << endl;
		fout << d.nameCompany << "   " << '\"' << d.nameCompany << '\"' << endl;
		fout << d.model << "   " << '\"' << d.nameCompany << '\"' << endl;
		fout << d.connect << "   " << '\"' << d.nameCompany << '\"' << endl;
		fout << d.colorKeyboard << "   " << '\"' << d.nameCompany << '\"' << endl;
		fout << d.price << "   " << '\"' << d.nameCompany << '\"' << endl;
		fout << "-------" << d.nameCompany << "-------" << endl;
		fout << endl;
		cout << "data written successfully" << endl;
	}
	else
		cout << "Error: The file was not opened.";
	fout.close();

	printKeyboard();
}

void Keyboard::save()
{
	ofstream outPassFile("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv");
	for (auto& d : data_)
		outPassFile
		<< d.nameCompany << ", "
		<< d.model << ", "
		<< d.price << ", "
		<< d.typeKeyboard
		<< endl;
}

void Keyboard::setTypeKeyboard(const string& typeKeyboard)
{
	if (!typeKeyboard.empty())
		this->d.typeKeyboard = typeKeyboard;
	else
		cerr << "error with type keyboard" << endl;
	// NEED ADD ELSE IF
}

void Keyboard::setNameCompany(const string& nameCompany)
{
	if (!nameCompany.empty())
		this->d.nameCompany = nameCompany;
	else
		cerr << "Error with name company keyboard" << endl;
}

void Keyboard::setModelProduct(const string& model)
{
	if (!model.empty())
		this->d.model = model;
	else
		cerr << "Error with model keyboard" << endl;
}

void Keyboard::setYearManufacture(const string& date)
{
	if (!date.empty())
		this->d.date = date;
	else
		cerr << "Error with date!" << endl;
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

void Keyboard::deleteProduct()
{
	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv", ios_base::trunc);
	
	if (!outData)
	{
		cerr << "error" << endl;
	}
	else if(!name_.empty() && !model_.empty())
	{
		typeKeyboard_.pop_back();
		name_.pop_back();
		model_.pop_back();
		yearManufacture_.pop_back();
		color_.pop_back();
		price_.pop_back();
		connect_.pop_back();

		save();
	}
	outData.close();
}



void Keyboard::setConnectKeyboard(const string& connect)
{
	if (!connect.empty())
		this->d.connect = connect;
	else
		cout << "error with connect keyboard" << endl;
}

void Keyboard::setPriceKeyboard(const string& priceKeyboard)
{
	if (priceKeyboard != " ")
		this->d.price = priceKeyboard;
	else
		cerr << "error with price keyboard" << endl;
}

void Keyboard::setColorKeyboard(const string& colorKeyboard)
{
	if (!colorKeyboard.empty())
		this->d.colorKeyboard = colorKeyboard;
	else
		cerr << "error with color keyboard" << endl;
}

void Keyboard::printKeyboard() const
{
	system("cls");
	cout << "~~~~~~KEYBOARD~~~~~~" << endl;
	cout << "Type keyboard:\t" << d.date << endl;
	cout << "Company name:\t" << d.nameCompany << endl;
	cout << "Connect:\t" << d.connect << endl;
	cout << "Color keyboard:\t" << d.colorKeyboard << endl;
	cout << "Price keyboard:\t" << d.price << "$" << endl;
	Keyboard key;
	key.generateNumberProduct();
	/*cout << "Quantity keyboard:\t" << keyboardCounter << "pieces" << endl;*/
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	system("pause");
	CLEEN;
}