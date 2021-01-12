#pragma once
#include "addProduct.h"

class Keyboard : public addProduct
{
public:
	void input();
	void setTypeKeyboard(const string& typeKeyboard);
	void setConnectKeyboard(const string& connect);
	void setPriceKeyboard(const string& priceKeyboard);
	void setColorKeyboard(const string& colorKeyboard);
	void printKeyboard() const;
private:
	ofstream outData;
	string typeKeyboard;
	string connect;
	string price;
	string colorKeyboard;
	size_t keyboardCounter;
};

