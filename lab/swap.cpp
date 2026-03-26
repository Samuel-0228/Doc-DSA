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
{    bool swapped = true;
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                int temp = arr[minIndex];
                arr[minIndex] = arr[j];
                arr[j] = temp;
                swapped=true;
                //cout << "Swapped " << arr[j] << " and " << arr[minIndex] << endl;
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

        if (minIndex != i) // swap happens only here
        {
            cout << "Swapped " << arr[i] << " and " << arr[minIndex] << endl;
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
