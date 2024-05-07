#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "enter num vid (1 <= a <= 20): ";
    int a;
    cin >> a;
    int dob = 1;
    int i = a;
    while (i <= 20) {
        dob *= i;
        i++;
    }
    cout << dob << endl;
	system("pause");
	return 0;
}