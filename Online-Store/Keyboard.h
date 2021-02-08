#pragma once
#include "Product.h"
#include <ctime>

struct CData
{
	string typeKeyboard;	
	string connect;
	string price;
	string colorKeyboard;
	string nameCompany;
	size_t keyboardCounter;
	string model;
	string date;
};

class Keyboard : public Product
{
public:
	void input();
	void save();
	void setTypeKeyboard(const string& typeKeyboard);
	void setNameCompany(const string& nameCompany) override;
	void setModelProduct(const string& model) override;
	void setYearManufacture(const string& date) override;
	void generateNumberProduct() override;
	void deleteProduct();
	void deleteProducts()
	{
		vector<string> result;
		string name, s;
		cin.ignore(32767, '\n');
		getline(cin, name);
		ifstream fout("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv");
		if (fout.is_open())
		{
			while (getline(fout, s))
			{
				if (s.find(name) == string::npos)
					result.push_back(s);
			}
		}
		else
			cout << "Error: The file was not opened.";
		fout.close();
		ofstream fsut("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv", std::ofstream::out | std::ofstream::trunc);
		fsut.close();
		ofstream fomt("C:\\Users\\vadim_oyanwuw\\source\\repos\\Online-Store\\Online-Store\\Products\\Keyboard.csv", ios::out | ios::app);
		if (fomt.is_open())
		{
			for (int i = 0; i < result.size(); i++)
				fomt << result[i] << endl;
			cout << "Information deleted" << endl;
			system("pause");
			fomt.close();
		}
		else
			cout << "Error: The file was not opened.";
		fout.close();
	}

	void setConnectKeyboard(const string& connect);
	void setPriceKeyboard(const string& priceKeyboard);
	void setColorKeyboard(const string& colorKeyboard);
	void printKeyboard() const;
private:
	ofstream outData;
	vector<int> num;
	vector<string> keyboard_;

	// test
	vector<string> typeKeyboard_;
	vector<string> name_;
	vector<string> model_;
	vector<string> yearManufacture_;
	vector<string> color_;
	vector<string> price_;
	vector<string> connect_;

	vector<CData> data_;

	CData d;
};

