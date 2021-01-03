#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	ofstream outData;
	string s;
	cin >> s;
	int n = 1;
	outData.open("test.csv", ios::app);
	outData << s << endl;


	return 0;
}