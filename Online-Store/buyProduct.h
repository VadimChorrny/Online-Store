#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "addProduct.h"
#include "Keyboard.h"

#define CLEEN system("cls");
#define ERROR cerr << "error" << endl;
using namespace std;

class buyProduct
{
public:

	friend class addProduct;
	string Remove_Line(string line, int value);
	buyProduct();
	void deleteProduct();
private:
	Product product;
	vector<string> basket;
	string action;
	Keyboard keyboard;
};