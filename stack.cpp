#include <bits/stdc++.h>
using namespace std;
class stack
{
public:
    int array[1000];
    int top;
    stack(){ top = -1;}
    int  push(int val);
    int pop(int val);
    int top(int val);
    bool isempty();
};

int stack::push(int val)
{
    if(top == 999){
        cout << "The stack is overflow" << endl;
        return -1;
    }
}

stack::~stack()
{
}
