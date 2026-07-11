#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << ((b + 1) * a * a + (2 * a + 1) * (1 - b)) / 2;

	return 0;
}
