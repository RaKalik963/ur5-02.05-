#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    do {
        cout << "enter num, and enter 0 to see answeer  ";
        cin >> num;
        sum += num; 
    } while (num != 0);

    cout << sum << endl;
	system("pause");
	return 0;
}