#pragma once
#include "addProduct.h"
class Phone :
    public addProduct
{
public:
	void input();
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void generateNumberProduct() override;
	void setChargingPhone(const string& connect);
	void setPricePhone(const string& pricePhone);
	void setColorPhone(const string& colorMouse);
	void printPhone() const;
private:
	ofstream outData;
	string nameCompany;
	string model;
	string charging;
	string price;
	string colorPhone;
	size_t phoneCounter;
	vector<int> num;


};

