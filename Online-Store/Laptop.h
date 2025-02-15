#pragma once

#include "Product.h"

class Laptop :
	public Product
{
public:
	void input();
	void deleteProducts();
	void setNameCompany(const string& nameCompany);
	void generateNumberProduct() override;
	// add sorting
	void setYearManufacture(const string& date) override;
	void setModelProduct(const string& model) override;
	void setChargingLaptop(const string& connect);
	void setPriceLaptop(const string& priceLaptop);
	void setColorLaptop(const string& colorLaptop);
	void printLaptop() const;
private:
	ofstream outData;
	vector<int> num;
	string nameCompany;
	string charging;
	string model;
	string date;
	string price;
	string type;
	string colorLaptop;
	size_t laptopCounter;
};
