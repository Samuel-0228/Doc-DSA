#include <iostream>

using namespace std;

// Create an empty Singly LL STACK
struct STACK{
    int data;
    STACK *next;
}*top = NULL;


bool isEmpty(){
    return top == NULL;
}


// basic operations
void push(int value){
    STACK *n=  new STACK;
    n->data = value;
    if(isEmpty()){
        n->next = NULL;
    }
    else{
        n->next = top;
    }
    top = n;
    cout<<value<<" - Pushed."<<endl;
}

void viewStack(){
    STACK *temp = top;
    while(temp != NULL){
        cout<<temp->data<<"--";
        temp = temp->next;
    }
    cout<<endl;
}




int main()
{
    cout << "DYNAMIC STACK CReated" << endl;
    push(4);
    viewStack();
    push(5);
    viewStack();
    push(6);
    viewStack();

    return 0;
}
