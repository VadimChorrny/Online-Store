#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Product
{
	string nameProduct;
	string typeProduct;
	string priceProduct;
};

class addProduct
{
public:
	addProduct();
	~addProduct();
	void input();
	void print();
	void setNameProduct(const string& name);		
	void setTypeProduct(const string& type);
	void setPriceProduct(const int& price);
	void sortProduct();
private:

	Product product;
	vector<string> n;


};

