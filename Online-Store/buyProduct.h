#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
#include "Keyboard.h"

using namespace std;

// init macros
#define CLEEN system("cls");
#define ERROR cerr << "error" << endl;

class buyProduct
{
public:
	friend class addProduct; // friend
	string Remove_Line(string line, int value); // for buy product
	buyProduct(); // ctor
	void deleteProduct(); // func for buy product

private:
	Products product;
	vector<string> basket;
	string action;
	Keyboard keyboard;
};