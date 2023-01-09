#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(25);
    s.insert(30);
    for(auto i=s.begin();i!=s.end();i++)
    cout<<(*i)<<" ";
    cout<<endl;
    cout<<s.size()<<" \n";
    if(s.find(15)==s.end())
    cout<<"not found";
    else cout<<"found  "<<*(s.find(15))<<endl;
    if(s.count(15))
    cout<<" found \n";
    else cout<<" not found \n ";
    s.erase(15);
    cout<<s.size()<<endl;
    auto i=s.find(10);
    s.erase(i);
    cout<<s.size()<<endl;
    s.clear();
    cout<<s.size()<<" ";


 return 0;
}