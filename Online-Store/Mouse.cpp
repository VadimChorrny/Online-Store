#include "Mouse.h"

void Mouse::input()
{
	CLEEN;
	cout << "~~~WORKED MOUSE~~~" << endl;
	cout << "Enter name company : ";
	cin >> name;
	cout << "Enter type mouse : ";
	cin >> typeMouse;

	cout << "Enter model : ";
	cin >> model;
	cout << "Enter connect : ";
	cin.ignore();
	cin >> connect;
	cout << "Enter date : ";
	cin >> date;

	cout << "Enter max-click mouse : ";
	cin >> MAX_CLICK;

	cout << "Enter color mouse : ";
	cin >> color;

	cout << "Enter price : ";
	cin >> price;
	ofstream fout("Products\\Mouse.csv", ios::out | ios::app);
	if (fout.is_open())
	{
		fout << "-------" << name << "-------" << endl;
		fout << name << "   " << '\"' << name << '\"' << endl;
		fout << typeMouse << "   " << '\"' << name << '\"' << endl;
		fout << model << "   " << '\"' << name << '\"' << endl;
		fout << connect << "   " << '\"' << name << '\"' << endl;
		fout << date << '\"' << name << '\"' << endl;
		fout << MAX_CLICK << "   " << '\"' << name << '\"' << endl;
		fout << color << "   " << '\"' << name << '\"' << endl;
		fout << price << "   " << '\"' << name << '\"' << endl;
		fout << "-------" << name << "-------" << endl;
		fout << endl;
		cout << "data written successfully" << endl;
	}
	else
		cout << "Error: The file was not opened.";
	fout.close();
	cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
	printMouse();
}

void Mouse::deleteProducts()
{
	vector<string> result;
	string name, s;
	cin.ignore(32767, '\n');
	getline(cin, name);
	ifstream fout("Products\\Mouse.csv");
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
	ofstream fsut("Products\\Mouse.csv", std::ofstream::out | std::ofstream::trunc);
	fsut.close();
	ofstream fomt("Products\\Mouse.csv", ios::out | ios::app);
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

void Mouse::setNameCompany(const string& nameCompany)
{
	if (!nameCompany.empty())
		this->name = nameCompany;
	else
		cerr << "Error with name company mouse" << endl;
}

void Mouse::setModelProduct(const string& model)
{
	if (!model.empty())
		this->model = model;
	else
		cerr << "Error with model mouse" << endl;
}

void Mouse::setYearManufacture(const string& date)
{
	if (!date.empty())
		this->date = date;
	else
		cerr << "Error with date mouse!" << endl;
}

void Mouse::generateNumberProduct()
{
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
	cout << "Company name:\t" << name << endl;
	cout << "Type mouse:\t" << typeMouse << endl;
	cout << "Connect mouse:\t" << connect << endl;
	cout << "Color mouse:\t" << color << endl;
	cout << "Max click:\t" << MAX_CLICK << endl;
	cout << "Mouse price:\t" << price << "$" << endl;
	Mouse mouse;
	mouse.generateNumberProduct();
	cout << "~~~~~~~~~~~~~~~~~~~" << endl;
	system("pause");
	system("cls");
}