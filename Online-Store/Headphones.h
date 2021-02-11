#pragma once
#include "Product.h"
class HeadPhones :
	public Product
{
public:
	void input();
	void deleteProducts();
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void setYearManufacture(const string& date) override; 
	void generateNumberProduct() override;
	// add sorting
	void setConnectHeadPhones(const string& connect);
	void setPriceHeadPhones(const string& priceHeadPhones);
	void setColorHeadPhones(const string& colorHeadPhones);
	void printHeadPhones() const;
private:
	ofstream outData;
	string nameCompany;
	string typeHeadphones;
	string model;
	string connect;
	string dates;
	string price;
	string colorHeadPhones;
	size_t headphonesCounter;
	vector<int> num;
	string date;
};

