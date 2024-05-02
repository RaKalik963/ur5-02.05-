#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
	cout << "enter first num";
	int num1;
	cin >> num1;
	cout << "enter last num";
	int num2;
	cin >> num2;
	while (num1 <= num2)
	{
		int i = num1++;
		if (i % 2 == 0)
		{
			SetConsoleTextAttribute(hConsole, 0x04);
			cout << "parni ";
		}
		if (i % 2 != 0)
		{
			SetConsoleTextAttribute(hConsole, 0x05);
			cout << "ne parni ";
		}
	    if (i % 7 == 0)
		{
			SetConsoleTextAttribute(hConsole, 0x02);
			cout << "cratni (7) ";
		}
		cout << i << endl;
		i++;
	}
	system("pause");
	return 0;
}