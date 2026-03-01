#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;   // Only two variables

    cout << "Enter 5 integers:\n";

    for(int i = 1; i <= 5; i++)
    {
        cin >> num;
        sum += num;
    }

    cout << "Sum = " << sum;

    return 0;
}