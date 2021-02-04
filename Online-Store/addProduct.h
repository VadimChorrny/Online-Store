#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <ctime>

using namespace std;

#define CLEEN system("cls");

struct Product
{
	string nameProduct;
	string typeProduct;
	string priceProduct;
	string modelProduct;
};

class addProduct
{
public:

	addProduct(); // don't need
	~addProduct();// don't need

	void input(); // init all
	void showAllProducts(); // show all products on monitor
	void sorting(); // sorting products
	void deleteProduct(); // delete products | need development
	void deleteFileWithProduct(); // delete file

	// for inheritance
	virtual void print() const; 
	virtual void setNameCompany(const string& nameCompany);
	virtual void setModelProduct(const string& model);
	virtual void setYearManufacture(const string& date);
	virtual void generateNumberProduct();

	// friend class :)
	friend class buyProduct;
	friend class Keyboard;
	friend class Phone;
	friend class Mouse;
	friend class Monitor;
	friend class Tablet;
	friend class Laptop;
	friend class Headphones;
private:
	Product product;
	vector<string> n;
	ofstream outData;
};