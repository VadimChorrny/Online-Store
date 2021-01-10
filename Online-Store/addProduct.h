#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

struct Product
{
	string nameProduct;
	string typeProduct;
	string priceProduct;
	string modelProduct;
	
};

struct Keyboard
{
	string typeKeyboard;
	string connect;
	string price;
	size_t keyboardCounter;
};

class addProduct
{
public:
	addProduct();
	~addProduct();
	void input();
	void print() const;
	void setNameProduct(const string& name);		
	void setTypeProduct(const string& type);
	void setModelProduct(const string& model);
	void setPriceProduct(const int& price);

	// set for product

	void setTypeKeyboard(const string& typeKeyboard);
	void setConnectKeyboard(const string& connect);
	void setPriceKeyboard(const string& priceKeyboard);
	
private:

	Product product;
	Keyboard keyboard;
	vector<string> n;
	ofstream outData;

};

