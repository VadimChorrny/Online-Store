#include "addProduct.h"



addProduct::addProduct()
{
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
		/*Keyboard::input();*/
	}
	//else if (product.typeProduct == "Mouse" || product.typeProduct == "mouse")
	//{
	//	system("cls");
	//	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Mouse.csv", ios::app);
	//	cout << "~~~WORKED MOUSE~~~" << endl;
	//	++mouse.mouseCounter;

	//	cout << "Enter type mouse:\t";
	//	cin >> mouse.typeMouse;
	//	setTypeMouse(mouse.typeMouse);
	//	outData << mouse.typeMouse << endl;

	//	cout << "Enter connect mouse:\t";
	//	cin >> mouse.connect;
	//	setConnectMouse(mouse.connect);
	//	outData << mouse.connect << endl;

	//	cout << "Enter color mouse:\t";
	//	cin >> mouse.color;
	//	setColorMouse(mouse.color);
	//	outData << mouse.color << endl;
	//	
	//	cout << "Enter max click mouse";
	//	cin >> mouse.MAX_CLICK;
	//	setMaxClickMouse(mouse.MAX_CLICK);
	//	outData << mouse.MAX_CLICK << endl;

	//	cout << "Enter price mouse:\t";
	//	cin >> mouse.price;
	//	setPriceMouse(mouse.price);
	//	outData << mouse.price << endl;
	//	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	//	printMouse();

	//}
	//else if (product.typeProduct == "Monitor" || product.typeProduct == "monitor")
	//{
	//	system("cls");
	//	outData.open("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Monitor.csv", ios::app);
	//	cout << "~~~~~WORKED MONITOR~~~~~" << endl;
	//	++monitor.monitorCounter;

	//	cout << "Enter type monitor:\t";
	//	cin >> monitor.typeMonitor;
	//	setTypeMonitor(monitor.typeMonitor);
	//	outData << monitor.typeMonitor << endl;

	//	cout << "Enter type matrix:\t";
	//	cin >> monitor.typeMatrix;
	//	setTypeMatrix(monitor.typeMatrix);
	//	outData << monitor.typeMatrix << endl;

	//	cout << "Enter length monitor:\t";
	//	cin >> monitor.lengthMonitor;
	//	setLengthMonitor(monitor.lengthMonitor);
	//	outData << monitor.lengthMonitor << endl;

	//	cout << "Enter price for monitor:\t";
	//	cin >> monitor.priceMonitor;
	//	setPriceMonitor(monitor.priceMonitor);
	//	outData << monitor.priceMonitor << endl;

	//	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;

	//	printMonitor();


	//}

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
	//cout << "~~~~~~OUTPUT~~~~~~" << endl;
	//cout << "NAME PRODUCT:\t" << product.nameProduct << endl;
	//cout << "TYPE PRODUCT:\t" << product.typeProduct << endl;
	//cout << "PRICE PRODUCT:\t" << product.priceProduct << "$"<< endl;
	//cout << "~~~~~~TESTING VECTOR~~~~~~" << endl;
	//
	//cout << "Size:\t" << n.size() << "\n";
	//cout << "Capacity:\t" << n.capacity() << "\n";
	cout << "Worked general print" << endl;
	
}



//void addProduct::setNameProduct(const string& name)
//{
//	if (name != " ")
//		this->product.nameProduct = name;
//	else
//		cerr << "Error with name product!" << endl;
//}
//void addProduct::setTypeProduct(const string& type)
//{
//	if (type != " ")
//		this->product.typeProduct = type;
//	else
//		cerr << " Error with type " << endl;
//
//	
//}
//
//void addProduct::setModelProduct(const string& model)
//{
//	if (model != " ")
//		this->product.modelProduct = model;
//	else
//		cerr << "Error with model" << endl;
//}
//
//void addProduct::setPriceProduct(const int& price)
//{
//	if (price != 0)
//		this->product.priceProduct = price;
//	else
//		cerr << "Error with price" << endl;
//}






//void addProduct::setTypeMouse(const string& typeMouse)
//{
//	if (!typeMouse.empty())
//		this->mouse.typeMouse = typeMouse;
//	else
//		cerr << "Error with type mouse" << endl;
//}
//
//void addProduct::setConnectMouse(const string& connect)
//{
//	if (!connect.empty())
//		this->mouse.connect = connect;
//	else
//		cerr << "Error with connect mouse" << endl;
//}
//
//void addProduct::setMaxClickMouse(const size_t& MAX_CLICKED)
//{
//	if (MAX_CLICKED != 0)
//		this->mouse.MAX_CLICK = MAX_CLICKED;
//	else
//		cerr << "Error with max clicked" << endl;
//
//}
//
//void addProduct::setPriceMouse(const string& priceMouse)
//{
//	if (priceMouse != " ")
//		this->mouse.price = priceMouse;
//	else
//		cerr << "Error with price mouse" << endl;
//}
//
//void addProduct::setColorMouse(const string& colorMouse)
//{
//	if (!colorMouse.empty())
//		this->mouse.color = colorMouse;
//	else
//		cerr << "Error with price mouse" << endl;
//}
//
//void addProduct::printMouse() const
//{
//	system("cls");
//	cout << "~~~~Mouse Print~~~~" << endl;
//	cout << "Type mouse:\t" << mouse.typeMouse << endl;
//	cout << "Connect mouse:\t" << mouse.connect << endl;
//	cout << "Color mouse:\t" << mouse.color << endl;
//	cout << "Max click:\t" << mouse.MAX_CLICK << endl;
//	cout << "Mouse price:\t" << mouse.price << "$" << endl;
//	cout << "~~~~~~~~~~~~~~~~~~~" << endl;
//	system("pause");
//	system("cls");
//}
//
//
//
//
//void addProduct::setTypeMonitor(const string& typeMonitor)
//{
//	if (!typeMonitor.empty())
//		this->monitor.typeMonitor = typeMonitor;
//	else
//		cerr << "Error with type monitor" << endl;
//}
//
//void addProduct::setLengthMonitor(const size_t& lengthMonitor)
//{
//	if (lengthMonitor != 0)
//		this->monitor.lengthMonitor = lengthMonitor;
//	else
//		cerr << "Error with length monitor" << endl;
//}
//
//void addProduct::setTypeMatrix(const string& typeMatrix)
//{
//	if (!typeMatrix.empty())
//		this->monitor.typeMatrix = typeMatrix;
//	else
//		cerr << "Error with type matrix" << endl;
//}
//
//void addProduct::setPriceMonitor(const size_t& priceMonitor)
//{
//	if (priceMonitor != 0)
//		this->monitor.priceMonitor = priceMonitor;
//	else
//		cerr << "Error with price monitor" << endl;
//}
//
//void addProduct::printMonitor() const
//{
//	system("cls");
//	cout << "~~~~MONITOR~~~~" << endl;
//	cout << "Type monitor:\t" << monitor.typeMonitor << endl;
//	cout << "Type matrix:\t" << monitor.typeMatrix << endl;
//	cout << "Length monitor:\t" << monitor.lengthMonitor << "dm" << endl;
//	cout << "Price:\t" << monitor.priceMonitor << "$" << endl;
//	system("pause");
//	system("cls");
//}
