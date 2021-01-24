#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "addProduct.h"
using namespace std;

class buyProduct
{
public:
	buyProduct();
	void deleteProduct();
private:
	Product product;
	vector<string> basket;
};