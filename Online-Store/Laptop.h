#pragma once

#include "addProduct.h"

class Laptop :
	public addProduct
{
public:
	void input();
	void setNameCompany(const string& nameCompany);
	void generateNumberProduct() override;
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
	string price;
	string colorLaptop;
	size_t laptopCounter;
};
