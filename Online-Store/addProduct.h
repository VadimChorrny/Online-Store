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

class addProduct
{
public:

	addProduct();
	~addProduct();

	void input();
	void print() const;
	//void setNameProduct(const string& name);		
	//void setTypeProduct(const string& type);
	//void setModelProduct(const string& model);
	//void setPriceProduct(const int& price);
	// set for keyboard
	//// set for mouse
	//void setTypeMouse(const string& typeMouse);
	//void setConnectMouse(const string& connect);
	//void setMaxClickMouse(const size_t& MAX_CLICKED);
	//void setPriceMouse(const string& priceMouse);
	//void setColorMouse(const string& colorMouse);
	//void printMouse() const;
	//// set for monitor
	//void setTypeMonitor(const string& typeMonitor);
	//void setLengthMonitor(const size_t& lengthMonitor);
	//void setTypeMatrix(const string& typeMatrix);
	//void setPriceMonitor(const size_t& priceMonitor);
	//void printMonitor() const;

private:
	Product product;
	vector<string> n;
	ofstream outData;
	
};

