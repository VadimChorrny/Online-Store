#include <iostream>
#include <vector>
#include <string>

using namespace std;
void showVecotor(vector<string> test);

void testVector()
{
	vector<string> s1{"one"};
	vector<string> s2{"two"};
	vector<string> s3{"three"};

	s3.insert(s1.begin(), s2.begin(),s2.end());
	showVecotor(s3);
	
}

void showVecotor(vector<string> test)
{
	for (auto& i : test)
	{
		cout << i << endl;
	}
}

void main()
{
	/*vector<string> test{"one","two","three"};

	showVecotor(test);
	cout << "__________" << endl;

	test.push_back("four");
	showVecotor(test);

	cout << "__________" << endl;
	
	test.pop_back();
	showVecotor(test);

	cout << "__________" << endl;
	test.clear();
	showVecotor(test);*/


	testVector();
}