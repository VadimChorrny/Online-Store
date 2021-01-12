#pragma once
#include "addProduct.h"

class Keyboard : public addProduct
{
public:
	void input();
	void setTypeKeyboard(const string& typeKeyboard);
	void setNameCompany(const string& nameCompany) override;
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
	string nameCompany;
	size_t keyboardCounter;
	
};

