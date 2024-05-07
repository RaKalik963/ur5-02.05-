#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int sum = 0;
    int num = 1;

    while (num <= 1000) {
        sum += num;
        num++;
    }
    float average = static_cast<float>(sum) / 1000;

    cout << average << endl;
	system("pause");
	return 0;
}