#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "enter num ";
    int k;
    cin >> k;
    int i = 1;
    while (i <= 100) {
        cout << k << " x " << i << " = " << (k * i) << endl;
        i++;
    }
	system("pause");
	return 0;
}