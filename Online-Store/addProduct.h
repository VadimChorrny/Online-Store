#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <ctime>

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
	virtual void setNameCompany(const string& nameCompany);
	virtual void setModelProduct(const string& model);
	virtual void generateNumberProduct();

private:
	Product product;
	vector<string> n;
	ofstream outData;
	
};

