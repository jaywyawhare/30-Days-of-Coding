#include <iostream>
using namespace std;

void print(int n)
{
    cout << "The number is : " << n << endl;
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    print(num);
    return 0;
}
