#include <iostream>
using namespace std;

struct stack
{
    int data;
    stack *next;
};

stack *top = NULL;
