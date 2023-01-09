#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n1, n2, n3, sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n1 >> n2 >> n3;
    stack<int> h1, h2, h3, s1, s2, s3;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        h1.push(x);
        sum1 += x;
    }
    while (!h1.empty())
    {
        s1.push(h1.top());
        h1.pop();
    }
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        h2.push(x);
        sum2 += x;
    }
    while (!h2.empty())
    {
        s2.push(h2.top());
        h2.pop();
    }
    for (int i = 0; i < n3; i++)
    {
        int x;
        cin >> x;
        h3.push(x);
        sum3 += x;
    }while (!h3.empty())
    {
        s3.push(h3.top());
        h3.pop();
    }

    while (sum1 != sum2 || sum2 != sum3)
    {
        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= s1.top();
            s1.pop();
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= s2.top();
            s2.pop();
        }
        else
        {
            sum3 -= s3.top();
            s3.pop();
        }
    }
    cout << sum1;
    return 0;
}