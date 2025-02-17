#include <iostream>
using namespace std;

int main()
{
    // Dynamic allocation of an integer
    int *ptr = new int; // Allocates memory for a single integer

    *ptr = 10;
    cout << "Value: " << *ptr << endl;

    delete ptr;    // Free allocated memory
    ptr = nullptr; // Avoid dangling pointer

    // Array
    cout << "\nArray\n";
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // Dynamic allocation of an array
    int *arr = new int[n];

    // Input values
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Output values
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;  // Free allocated memory
    arr = nullptr; // Avoid dangling pointer

    return 0;
}
