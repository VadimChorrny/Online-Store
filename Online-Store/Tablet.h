#pragma once

#include "addProduct.h"

class Tablet : public addProduct
{
public:
	
	void input();
	void setNameTablet(const string& nameCompanyTablet);
	void setChargingTablet(const string& connect);
	void setPriceTablet(const string& priceTablet);
	void setColorTablet(const string& colorTablet);
	void printTablet() const;

private:
	ofstream outData;
	string nameCompany;
	string charging;
	string price;
	string colorTablet;
	size_t tabletCounter;
};
