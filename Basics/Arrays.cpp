#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "enter the size of the array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter the element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "the elements in the array are: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}