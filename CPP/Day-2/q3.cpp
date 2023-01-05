#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of all element in array is : " << sum << endl;

    return 0;
}