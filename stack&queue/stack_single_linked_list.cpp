#include <iostream>

using namespace std;

struct STACK{
    int data;
    STACK *next;
}*top=NULL;

bool isEmpty(){
    return top==NULL;
}

void push(int value){
    STACK *n = new STACK;
    n->data = value;
    if(isEmpty()){
        n->next = NULL;
        top = n;
    }
    else{
        n->next = top ;
        top = n;
    }
    cout<<"Data Pushed"<<endl;
}




int main()
{
    cout << "STACK operation started"<<endl;
    push(4);
    push(5);
    push(6);
    return 0;
}
