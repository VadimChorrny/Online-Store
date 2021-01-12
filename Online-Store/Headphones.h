#pragma once
#include "addProduct.h"
class HeadPhones :
	public addProduct
{
public:
	void input();
	void setNameHeadPhones(const string& nameCompanyHeadPhones);
	void setConnectHeadPhones(const string& connect);
	void setPriceHeadPhones(const string& priceHeadPhones);
	void setColorHeadPhones(const string& colorHeadPhones);
	void printHeadPhones() const;
private:
	ofstream outData;
	string nameCompany;
	string connect;
	string price;
	string colorHeadPhones;
	size_t headphonesCounter;
};

