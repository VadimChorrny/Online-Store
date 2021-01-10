#include "addProduct.h"



addProduct::addProduct()
{
	product.nameProduct = "~~~~ Default no name ~~~~";
	product.typeProduct = "~~~~ Default no type ~~~~";
	product.priceProduct = "~~~ Default no price ~~~~";
}

addProduct::~addProduct()
{}

void addProduct::input()
{
	//ifstream in("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Name.txt");
	

	cout << endl;
	cout << "~~~~~~INPUT~~~~~~" << endl;
	cout << endl;

	cout << "Enter type product:\t" << endl;
	cin >> product.typeProduct;
	if (product.typeProduct == "Keyboard" || product.typeProduct == "keyboard")
	{
		system("cls");
		outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv", ios::app);
		++keyboard.keyboardCounter;
		cout << "~~~WORKED KEYBOARD~~~" << endl;
		cout << "Enter type keyboard:\t";
		cin >> keyboard.typeKeyboard;
		setTypeKeyboard(keyboard.typeKeyboard);
		outData << keyboard.typeKeyboard << endl;

		cout << "Enter how connect keyboard:\t";
		cin >> keyboard.connect;
		setConnectKeyboard(keyboard.connect);
		outData << keyboard.connect << endl;

		cout << "Enter color keyboard:\t";
		cin >> keyboard.colorKeyboard;
		setColorKeyboard(keyboard.colorKeyboard);
		outData << keyboard.colorKeyboard << endl;


		cout << "Enter price keyboard:\t";
		cin >> keyboard.price;
		setPriceKeyboard(keyboard.price);
		outData << keyboard.price << endl;

		cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
		printKeyboard();
	}
	cout << endl;

	/*cout << "Enter name product:\t" << endl;
	cin >> product.nameProduct;
	outData << product.nameProduct << endl;
	cout << endl;
	
	cout << "Enter model product:\t" << endl;
	cin >> product.modelProduct;
	outData << product.modelProduct << endl;
	cout << endl;

	cout << "Enter price product:\t" << endl;
	cin >> product.priceProduct;
	outData << product.priceProduct << endl;
	cout << endl;*/
	
}


void addProduct::print() const
{
	system("cls");
	cout << "~~~~~~OUTPUT~~~~~~" << endl;
	cout << "NAME PRODUCT:\t" << product.nameProduct << endl;
	cout << "TYPE PRODUCT:\t" << product.typeProduct << endl;
	cout << "PRICE PRODUCT:\t" << product.priceProduct << "$"<< endl;

	cout << "~~~~~~TESTING VECTOR~~~~~~" << endl;
	
	cout << "Size:\t" << n.size() << "\n";
	cout << "Capacity:\t" << n.capacity() << "\n";
	
}

void addProduct::setNameProduct(const string& name)
{
	if (name != " ")
		this->product.nameProduct = name;
	else
		cerr << "Error with name product!" << endl;
}

void addProduct::setTypeProduct(const string& type)
{
	if (type != " ")
		this->product.typeProduct = type;
	else
		cerr << " Error with type " << endl;

	
}

void addProduct::setModelProduct(const string& model)
{
	if (model != " ")
		this->product.modelProduct = model;
	else
		cerr << "Error with model" << endl;
}

void addProduct::setPriceProduct(const int& price)
{
	if (price != 0)
		this->product.priceProduct = price;
	else
		cerr << "Error with price" << endl;
}

void addProduct::setTypeKeyboard(const string& typeKeyboard)
{

	if (!typeKeyboard.empty())
		keyboard.typeKeyboard = typeKeyboard; 
	else
		cerr << "error with type keyboard" << endl;
	// NEED ADD ELSE IF
		
}

void addProduct::setConnectKeyboard(const string& connect)
{
	if (!connect.empty())
		this->keyboard.connect = connect;
	else
		cerr << "error with connect keyboard" << endl;
}

void addProduct::setPriceKeyboard(const string& priceKeyboard)
{
	if (priceKeyboard != " ")
		this->keyboard.price = priceKeyboard;
	else
		cerr << "error with price keyboard" << endl;
}

void addProduct::setColorKeyboard(const string& colorKeyboard)
{
	if (!colorKeyboard.empty())
		this->keyboard.colorKeyboard = colorKeyboard;
	else
		cerr << "error with color keyboard" << endl;
}

void addProduct::printKeyboard() const
{
	system("cls");
	cout << "~~~~~~KEYBOARD~~~~~~" << endl;
	cout << "Type keyboard:\t" << keyboard.typeKeyboard << endl;
	cout << "How to connect keyboard:\t" << keyboard.connect << endl;
	cout << "Color keyboard:\t" << keyboard.colorKeyboard << endl;
	cout << "Price keyboard:\t" << keyboard.price << "$" << endl;
	cout << "Quantity keyboard:\t" << keyboard.keyboardCounter<< "pieces"<<endl;
}
