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
	string colorKeyboard;
	size_t keyboardCounter;
};

struct Mouse
{
	string typeMouse;
	string connect;
	string color;
	size_t MAX_CLICK;
	size_t mouseCounter;
	string price;
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

	// set for keyboard

	void setTypeKeyboard(const string& typeKeyboard);
	void setConnectKeyboard(const string& connect);
	void setPriceKeyboard(const string& priceKeyboard);
	void setColorKeyboard(const string& colorKeyboard);
	void printKeyboard() const;

	// set for mouse
	void setTypeMouse(const string& typeMouse);
	void setConnectMouse(const string& connect);
	void setMaxClickMouse(const size_t& MAX_CLICKED);
	void setPriceMouse(const string& priceMouse);
	void setColorMouse(const string& colorMouse);
	void printMouse() const;
	


	
private:

	Product product;
	Keyboard keyboard;
	Mouse mouse;
	vector<string> n;
	ofstream outData;

};

