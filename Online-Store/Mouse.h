#pragma once
#include "Product.h"
class Mouse :
    public Product
{
public:

	void input();
	void deleteProducts();
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void setYearManufacture(const string& date) override;
	void generateNumberProduct() override;
	//add sorting
	void setTypeMouse(const string& typeMouse);
	void setConnectMouse(const string& connect);
	void setMaxClickMouse(const size_t& MAX_CLICKED);
	void setPriceMouse(const string& priceMouse);
	void setColorMouse(const string& colorMouse);
	void printMouse() const;

private:
	ofstream outData;
	vector<int>num;
	string typeMouse;
	string connect;
	string name;
	string color;
	string model;
	size_t MAX_CLICK;
	size_t mouseCounter;
	string price;
	string date;
};

