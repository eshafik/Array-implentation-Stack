#include<iostream>
using namespace std;
#define max 100
int top=-1; // initially top is equal to -1;
int arr[max]; //declare a array
void push ( int value){
    if(top>=max-1){
        cout<<"The stack is overflow"<<endl;
        return;
    }
    arr[++top] = value;
}
void pop(){
    top--;
    if(top==-1){
        cout<<"The stack is empty"<<endl;
        return;
    }
}
void print(){
    int i;
    //print up to top value of stack
    for(i=0;i<=top;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}
int main(){
    push(2);
    push(3);
    push(5);
    push(6);
    pop();
    pop();
    pop();
    pop();
    print();

return 0;
}
