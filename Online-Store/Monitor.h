#pragma once
#include "Product.h"
class Monitor :
    public Product
{
public:
	void input();
	void deleteProducts();
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void setYearManufacture(const string& date) override;
	void generateNumberProduct() override;
	// add sorting
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
	string connect;
	ofstream outData;
	string model;
	string date;
	vector<int>num;


};

