#include <iostream>
using namespace std;

int top=-1;
int stack[10];

bool isEmpty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if(top==9){
        return true;
    }else{
        return false;
    }
}

int display(){
    if(isEmpty()){
        cout<<"Stack Underflow\n\n";
    }else{
        int i;
        cout<<"\nThe values in the stack from top to bottom are:\n\n";
        for(i=top;i>=0;i--){
            cout<<stack[i];
            cout<<"\n";
        }
        cout<<"\n\n";
    }
    return 0;
}

void push(int value){
    if(isFull()){
        cout<<"Stack overflow\n\n";
    }else{
        top++;
        stack[top]=value;
        display();
    }
}

int pop(){
    if(isEmpty()){
        cout<<"Stack underflow\n\n";
    }else{
        int popedValue=stack[top];
        top--;
        return popedValue;
    }
}

int peek(int index){
    if(isEmpty()){
        cout<<"Stack underflow\n\n";
    }else{
        int value=stack[index];
        return value;
    }
}

int change(int index,int newValue){
    int originalValue=stack[index];
    stack[index]=newValue;
    cout<<"Value at position "<<index<<" changed from "<<originalValue<<" to "<<newValue<<"\n\n";
    return 0; 
}

int count(){
    int total=top+1;
    return total;
}


int main(){
    int choice,position,value;
    
    do{
        cout<<"***ARRAY IMPLEMENTATION OF STACK***\nChoose an operation\n";
        cout<<"1. isEmpty\n2. isFull\n3. Display\n4. Push\n5. Pop\n6. Peek\n7. Change\n8. Count \n9. Clear Screen\n0. Exit\n\n";
        cin>>choice;

    switch(choice){
        case 0:
        return 0;
        break;

        case 1:
        isEmpty();
        break;

        case 2:
        isFull();
        break;

        case 3:
        display();
        break;

        case 4:
        int value;
        cout<<"Enter value to be added to stack\n";
        cin>>value;
        push(value);
        break;

        case 5:
        cout<<"Popped value is:"<<pop()<<display()<<"\n\n";
        break;

        case 6:
        cout<<"Enter index of the element you want to find\n";
        cin>>position;
        cout<<"The value at position "<<position<<" is "<<peek(position)<<"\n\n";
        break;

        case 7:
        cout<<"Enter the index of the value you want to change\n";
        cin>>position;
        cout<<"Enter the new value of the position\n";
        cin>>value;
        change(position,value);
        break;

        case 8:
        cout<<"The stack has "<<count()<<" items\n\n";
        break;

        case 9:
        system("cls");
        break;

        default:
        cout<<"Enter a valid option\n\n";
        break;
    }
    }
    while(choice!=0);
}