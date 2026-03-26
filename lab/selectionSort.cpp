#include <iostream>
using namespace std;

void printsorted(int a[], int n)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "}";
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            cout << "Swapped " << arr[i] << " and " << arr[minIndex] << endl;
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    int arr[] = {3, 55, 66, 1, 11, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    printsorted(arr, n);
}