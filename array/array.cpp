#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    // Taking input
    cout << "Enter 10 array elements:" << endl;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // Displaying output
    cout << "\nArray elements are:" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
