#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter x" << endl;
	int x;
	cin >> x;
	cout << "enter y" << endl;
	int y;
	cin >> y;
	int i = 1;
	int ste = 0;
	while (ste < y)
	{
		i *= x;
		ste++;
	}
	cout << i << endl;
	system("pause");
	return 0;
}