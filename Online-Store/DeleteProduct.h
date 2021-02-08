#pragma once
#include <iostream>
#include "Product.h"
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
	Products* p;

};

