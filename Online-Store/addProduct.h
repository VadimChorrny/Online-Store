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
	void input();
	void print() const;
	void showAllProducts();
	void sorting();
	void deleteProduct();
	void deleteFileWithProduct();
	virtual void setNameCompany(const string& nameCompany);
	virtual void setModelProduct(const string& model);
	virtual void setYearManufacture(const string& date);
	virtual void generateNumberProduct();


	// maybe future bug
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