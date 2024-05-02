#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter num";
	int num1;
	cin >> num1;
	int num2 = 500;
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