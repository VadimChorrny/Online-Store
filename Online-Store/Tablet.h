#pragma once

#include "Product.h"

class Tablet : public Product
{
public:
	
	void input();
	void deleteProducts();
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void setYearManufacture(const string& date) override;
	void generateNumberProduct() override;
	// add sorting
	void setChargingTablet(const string& connect);
	void setPriceTablet(const string& priceTablet);
	void setColorTablet(const string& colorTablet);
	void printTablet() const;

private:
	ofstream outData;
	string nameCompany;
	string type;
	string model;
	string charging;
	string price;
	string colorTablet;
	size_t tabletCounter;
	vector<int> num;
	string date;
};
