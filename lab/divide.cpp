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

void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;
    int temp[33];

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (int x = left; x < k; x++)
    {
        arr[x] = temp[x];
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main()
{
    int arr[] = {3, 55, 66, 1, 11, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);
    printsorted(arr, n);
}