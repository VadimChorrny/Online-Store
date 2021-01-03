#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

struct Product
{
	string nameProduct;
	string typeProduct;
	string priceProduct;
	string modelProduct;
};

class addProduct
{
public:
	addProduct();
	~addProduct();
	void input();
	void print() const;
	void setNameProduct(const string& name);		
	void setTypeProduct(const string& type);
	void setModelProduct(const string& model);
	void setPriceProduct(const int& price);
	
private:

	Product product;
	vector<string> n;
	ofstream outData;


};

