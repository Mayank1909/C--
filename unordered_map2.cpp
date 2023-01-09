#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
unordered_map<string,int>m;
m["gfg"]=20;//for insertion and accesing
m["ide"]=30;
m["course"]=15;
if(m.find("ide")!=m.end())
cout<<"not found";
else cout<<"found";
for(auto x=m.begin();x!=m.end();x++)
cout<<(x->first)<<" "<<(x->second)<<endl;
 return 0;
}