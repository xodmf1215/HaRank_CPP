#define _CRT_SECURE_NO_WWARNINGS 1
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, q;
	int **a;
	int n2, d;
	int q1, q2;
	cin >> n >> q;
	a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		cin >> n2;
		a[i] = new int[n2];
		for (int j = 0; j < n2; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < q; i++)
	{
		cin >> q1 >> q2;
		cout << a[q1][q2] << endl;
	}
	return 0;
}