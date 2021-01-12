#pragma once

#include "addProduct.h"

class Laptop :
	public addProduct
{
public:
	void input();
	void setNameLaptop(const string& nameCompanyLaptop);
	void setChargingLaptop(const string& connect);
	void setPriceLaptop(const string& priceLaptop);
	void setColorLaptop(const string& colorLaptop);
	void printLaptop() const;
private:
	ofstream outData;
	string nameCompany;
	string charging;
	string price;
	string colorLaptop;
	size_t laptopCounter;
};
