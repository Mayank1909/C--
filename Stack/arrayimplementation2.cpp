#include <iostream>
using namespace std;
struct Mystack
{
    int *arr;
    int top, cap;
    Mystack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x)
    {
        if (top == cap - 1)
            cout << "underflow";
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
            cout << "underflow";
            else{
        int res = arr[top];
        top--;
        return res;}
    }
    int peek()
    {
        if (top == -1)
            cout << "underflow";
        else
        return arr[top];
    }
    int size()
    {
        return (top + 1);
    }
    bool isempty()
    {
        return (top == -1);
    }
};
int main()
{
    Mystack s(10);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.peek()<<endl;

    return 0;
}