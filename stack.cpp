#include <bits/stdc++.h>
using namespace std;
class Stack
{
int head;
#define max 1000
private:
    int array[max];
public:
    Stack(){ head = -1;}
    bool  push(int val);
    int pop();
    int top();
    bool isempty(){ return (head==-1)?true:false;}
    bool isfull(){return (head==max)?true:false;}
};

bool Stack::push(int val)
{
    if(isfull()){
        cout << "The stack is overflow" << endl;
        return false;
    }
    else{
        array[++head] = val;
        return true;
    }
}
int Stack::pop(){
    if(isempty()){
        cout << "The stack is empty!!!\n";
        return -1;
    }
    else{
        return array[head--];
    }
}
int Stack::top(){
        if(isempty()){
        cout << "The stack is empty!!!\n";
        return -1;
    }
    else{
        return array[head];
    }
}

int main(){
    Stack q;
    q.push(20);
    q.push(50);
    q.push(8);
    cout<< q.pop() << " " << q.pop() << endl;
    return 0;
}