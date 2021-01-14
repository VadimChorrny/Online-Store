#pragma once
#include "addProduct.h"
class HeadPhones :
	public addProduct
{
public:
	void input();
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void setYearManufacture(const string& date) override;
	void generateNumberProduct() override;
	void setConnectHeadPhones(const string& connect);
	void setPriceHeadPhones(const string& priceHeadPhones);
	void setColorHeadPhones(const string& colorHeadPhones);
	void printHeadPhones() const;
private:
	ofstream outData;
	string nameCompany;
	string model;
	string connect;
	string price;
	string colorHeadPhones;
	size_t headphonesCounter;
	vector<int> num;
	string date;
};

