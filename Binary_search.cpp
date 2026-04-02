#include <iostream>
using namespace std;

int main()
{
    string names[8] = {"Alice", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Heidi"};
    string target;
    cout << "Enter the name you whant to find: " << endl;
    cin >> target;

    bool found = false;
    int low = 0, high = 7;
    int counter = 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (names[mid] == target)
        {
            found = true;
            cout << "Name found at " << mid + 1 << endl;
            cout << "found in turn: " << counter;
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
        counter++;
    }
    if (!found)
    {
        cout << "Name not found in the list." << endl;
    }
}