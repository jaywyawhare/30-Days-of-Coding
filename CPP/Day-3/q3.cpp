#include <iostream>
using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int num1;
    int num2;
    cout << "Enter the number 1 : ";
    cin >> num1;
    cout << "Enter the number 2 : ";
    cin >> num2;
    cout << "The sum of " << num1 << " & " << num2 << " is " << add(num1, num2);
    return 0;
}