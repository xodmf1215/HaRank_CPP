#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

void parseInts(string str,vector<int> *integers) {
	// Complete this function
	int a;
	char b;
	stringstream ss(str);
	while (!ss.eof())
	{
		ss >> a >> b;
		integers->push_back(a);
	}
}

int main() {
	string str;
	cin >> str;
	vector<int> *integers = new vector<int>();
	//vector<int> *integ = &integers;
	//vector<int> *test;
	parseInts(str,integers);
	for (int i = 0; i < integers->size(); i++) {
		cout << (*integers)[i] << "\n";
	}

	return 0;
}