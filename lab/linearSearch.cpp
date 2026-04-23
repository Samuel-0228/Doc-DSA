#include <iostream>
using namespace std;

int main()
{
    int names[8] = {1, 3, 6, 7, 8, 9, 99, 100};
    int target;
    bool found = false;
    cout << "Enter the number you want to find: " << endl;
    cin >> target;

    for (int i = 0; i < 8; i++)
    {
        if (names[i] == target)
        {
            cout << "Number found at " << i + 1 << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "the number is not found";
    }
}