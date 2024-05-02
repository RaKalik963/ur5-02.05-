#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter first num";
	int num1;
	cin >> num1;
	cout << "enter last num";
	int num2;
	cin >> num2;
	int zero;
	do
	{
		int sum = num1 + num2;
		cout << "enter num(0)d to see answer";
		cin >> zero;
		if (zero == 0)
		{
			cout << sum << endl;
		}

	} while (zero == 0);
	system("pause");
	return 0;
}