#pragma once
#include "Product.h"
#include <ctime>

struct CData
{
	string typeKeyboard;	
	string connect;
	string price;
	string colorKeyboard;
	string nameCompany;
	size_t keyboardCounter;
	string model;
	string date;
};

class Keyboard : public Product
{
public:
	void input();
	void save();
	void setTypeKeyboard(const string& typeKeyboard);
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void setYearManufacture(const string& date) override;
	void generateNumberProduct() override;
	//void deleteProduct();
	void deleteProducts();
	void setConnectKeyboard(const string& connect);
	void setPriceKeyboard(const string& priceKeyboard);
	void setColorKeyboard(const string& colorKeyboard);
	void printKeyboard() const;
private:
	ofstream outData;
	vector<int> num;
	vector<string> keyboard_;

	// test
	vector<string> typeKeyboard_;
	vector<string> name_;
	vector<string> model_;
	vector<string> yearManufacture_;
	vector<string> color_;
	vector<string> price_;
	vector<string> connect_;

	vector<CData> data_;

	CData d;
};

