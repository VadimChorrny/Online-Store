#pragma once
#include "addProduct.h"
class Mouse :
    public addProduct
{
public:

	void input();
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void generateNumberProduct() override;

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
};

