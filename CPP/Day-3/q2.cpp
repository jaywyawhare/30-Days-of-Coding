#include <iostream>
using namespace std;

int square(int n)
{
    int square = n * n;
    return square;
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << "The square of " << num << " is : " << square(num);
    return 0;
}