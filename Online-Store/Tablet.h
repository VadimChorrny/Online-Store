#pragma once

#include "addProduct.h"

class Tablet : public addProduct
{
public:
	
	void input();
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void setYearManufacture(const string& date) override;
	void generateNumberProduct() override;
	void setChargingTablet(const string& connect);
	void setPriceTablet(const string& priceTablet);
	void setColorTablet(const string& colorTablet);
	void printTablet() const;

private:
	ofstream outData;
	string nameCompany;
	string model;
	string charging;
	string price;
	string colorTablet;
	size_t tabletCounter;
	vector<int> num;
	string date;
};
