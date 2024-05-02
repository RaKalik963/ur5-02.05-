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
	int i = num1;
	int sum = 0;
	while (i <= num2)
	{
		sum += i;
		i++;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}