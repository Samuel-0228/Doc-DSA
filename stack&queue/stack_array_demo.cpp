#include <iostream>
#iinclude <climits>
using namespace std;
// Array: EMPTY Stack
int const SIZE =5;
int STACK [SIZE];
int top = -1;

// basic operations
// push
void push(int data){
    if(isFull()){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top++;
        STACK[top] =  data;
        cout<<"Data Pushed"<<endl;
    }
}

int pop(){
    int data = INT_MIN;
    if(isEmpty()){
        cout<<"STACK underflow"<<endl;
    }
    else{
        data = STACK[top];
        top--;
        cout<<"Data Poped"<<endl;
    }
    return data;
}


int peek(){
    int data = INT_MIN;
    if(isEmpty()){
        cout<<"Underflow"<<endl;
    }else
        data = STACK[top];
    return  data;
}

bool isEmpty(){
    if(top == -1)
        return true;
    return false;
}
bool isFull(){
    return top>=SIZE-1;
}

void viewStack(){
    for(int i=0;i<=top;i++){
        cout<<STACK[i]<<"--";
    }
    cout<<endl;
}

int main()
{
    cout<<"STACK operation started..."<<endl;
    push(4);
    viewStack();
    push(5);
    viewStack();
    push(6);
    viewStack();
    pop();
    viewStack();
    pop();
    viewStack();
    return 0;
}
 
