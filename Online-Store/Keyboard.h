#pragma once
#include "addProduct.h"
#include <ctime>

class Keyboard : public addProduct
{
public:
	void input();
	void setTypeKeyboard(const string& typeKeyboard);
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void setYearManufacture(const string& date) override;
	void generateNumberProduct() override;
	
	void setConnectKeyboard(const string& connect);
	void setPriceKeyboard(const string& priceKeyboard);
	void setColorKeyboard(const string& colorKeyboard);
	void printKeyboard() const;
private:
	ofstream outData;
	vector<int> num;
	//vector<string> keyboard;
	string typeKeyboard;
	string connect;
	string price;
	string colorKeyboard;
	string nameCompany;
	size_t keyboardCounter;
	string model;
	string date;

	// maybe add vector for every details
	
};

