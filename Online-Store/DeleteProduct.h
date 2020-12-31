#pragma once
#include <iostream>
#include "addProduct.h"
using namespace std;

class DeleteProduct
{
public:
	DeleteProduct();
	~DeleteProduct();
	void print() const;
	void deleteProduct(string& str, string& fragment);
	void deleteManually(string& arg);
private:
	friend class addProduct;
	Product* p;

};

