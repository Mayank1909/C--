#include<iostream>
#include<vector>
using namespace std;
struct Mystack
{
    vector<int>v;

    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
       int res=v.back();
       v.pop_back();
       return res;
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool isempty()
    {
        return v.empty();
    }
};
int main()
{
    Mystack s;
    // cout<<s.pop()<<endl;
    // cout<<s.peek()<<endl;
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;



 return 0;
}