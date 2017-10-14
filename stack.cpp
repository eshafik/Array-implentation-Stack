#include<iostream>
using namespace std;
int size =5;
int top=-1; // initially top is equal to -1
int *arr = new int[5]; // declare array pointer for dynamic array

//array resizing
void resizeArray(){
    int *newArr = new int[size*2]; // create new array
    for(int i=0;i<=top;i++){
        newArr[i]= arr[i];
    }
    size = size*2;
    delete[]arr;
    arr = newArr;
}

void push ( int value){
    if(top>=size-1){
        cout<<"The stack is resizing"<<endl;
        resizeArray();

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
    push(2);
    push(3);
    push(5);
    push(6);
    print();

return 0;
}
