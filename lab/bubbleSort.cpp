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

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true;
                // cout << "Swapped " << a[j + 1] << " and " << a[j] << endl;
            }
            else
            {
                swapped = false;
            }
            if (swapped)
            {
                cout << "Swapped " << a[j + 1] << " and " << a[j] << endl;
            }
        }
    }
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

    bubbleSort(arr, n);
    //selectionSort(arr, n);
    printsorted(arr, n);
}
