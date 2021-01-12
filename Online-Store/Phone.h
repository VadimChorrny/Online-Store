#pragma once
#include "addProduct.h"
class Phone :
    public addProduct
{
public:
	void input();
	void setNamePhone(const string& nameCompanyPhone);
	void setChargingPhone(const string& connect);
	void setPricePhone(const string& pricePhone);
	void setColorPhone(const string& colorMouse);
	void printPhone() const;
private:
	ofstream outData;
	string nameCompany;
	string charging;
	string price;
	string colorPhone;
	size_t phoneCounter;


};

