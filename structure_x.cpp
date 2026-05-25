#include <iostream>
using namespace std;

struct student
{
    int year;
    string department;
    string id;
    string name;
};

int main()
{
    student s1;
    s1.year = 1999;
    s1.department = "IS";

    cout << s1.department << endl;
    cout << s1.year << endl;

    student s2 = {2000, "CS", "ugr-12", "belay"};
    cout << s2.department << endl;

    student s3[2] = {
        {1, "matths", "ugr-13", "alex"},
        {2, "phy", "ugr-14", "tesema"}};

    return 0;
}
