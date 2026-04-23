#include <iostream>
using namespace std;

int main()
{
    int names[8] = {1, 3, 6, 7, 8, 9, 99, 100};
    int target;
    cout << "Enter the number you want to find: " << endl;
    cin >> target;

    bool found = false;
    int low = 0, high = 7;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (names[mid] == target)
        {
            found = true;
            cout << "Number found at " << mid + 1 << endl;

            break;
        }
        else if (names[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (!found)
    {
        cout << "the number is  not found in the list." << endl;
    }
}