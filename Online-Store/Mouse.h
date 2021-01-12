#pragma once
#include "addProduct.h"
class Mouse :
    public addProduct
{
public:

	void input();
	void setNameCompany(const string& nameCompany) override;
	void setTypeMouse(const string& typeMouse);
	void setConnectMouse(const string& connect);
	void setMaxClickMouse(const size_t& MAX_CLICKED);
	void setPriceMouse(const string& priceMouse);
	void setColorMouse(const string& colorMouse);
	void printMouse() const;

private:
	ofstream outData;
	string typeMouse;
	string connect;
	string name;
	string color;
	size_t MAX_CLICK;
	size_t mouseCounter;
	string price;
};

