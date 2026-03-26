#include <iostream>
using namespace std;

int operation(int x, int y)
{
    int choice;
    do
    {
        cout << "Enter two numbers: ";
        cin >> x >> y;
        cout << "====Menu====" << endl
             << "1. Addition" << endl
             << "2. Multiply" << endl
             << "3. Division" << endl
             << "4. Subtract" << endl
             << "5. Exit" << endl
             << "Enter choice:" << endl;
        cin >> choice;

        if (choice == 0)
        {
            break;
        }
        switch (choice)
        {
        case 1:
            return x + y;
            break;
        case 2:
            return x * y;
            break;
        case 3:
            if (y == 0)
            {
                break;
            }
            else
                return x / y;
            break;
        case 4:
            return x - y;
            break;
        }

    } while (true);
}

int main()
{
    int a, b;
    cout << operation(a, b);
}