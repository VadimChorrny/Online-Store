#pragma once
#include "addProduct.h"
class Monitor :
    public addProduct
{
public:
	void input();
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void generateNumberProduct() override;
	void setTypeMonitor(const string& typeMonitor);
	void setLengthMonitor(const size_t& lengthMonitor);
	void setTypeMatrix(const string& typeMatrix);
	void setPriceMonitor(const size_t& priceMonitor);
	void printMonitor() const;
private:
	string name;
	string typeMonitor;
	string typeMatrix;
	size_t lengthMonitor;
	size_t priceMonitor;
	size_t monitorCounter;
	ofstream outData;
	string model;
	vector<int>num;


};

