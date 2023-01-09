#include <bits/stdc++.h>
using namespace std;

struct knap
{
    int weight, value;

    knap(int value, int weight)
    {
        this->value = value;
        this->weight = weight;
    }
};

bool compare(struct knap a, struct knap b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

double knapsack(int W, struct knap arr[], int n)
{
    sort(arr, arr + n, compare);
    double res = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= W)
        {
            W -= arr[i].weight;
            res += arr[i].value;
        }
        else
        {
            res += arr[i].value * ((double)W / (double)arr[i].weight);
            break;
        }
    }
    return res;
}

int main()
{
    int W = 50; //    Weight of knapsack
    knap arr[] = {{60, 10}, {100, 20}, {120, 30}};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << knapsack(W, arr, n);

    return 0;
}
