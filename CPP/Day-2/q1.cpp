#include <iostream>
using namespace std;

int main()
{
    int array[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        cout << "Element " << i + 1 << " : " << array[i] << endl;
    }
    return 0;
}