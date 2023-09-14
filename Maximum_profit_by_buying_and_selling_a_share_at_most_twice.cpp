#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int a[n];
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int profit[n];
    for (int i = 0; i < n; i++)
    {
        profit[i] = 0;
    }

    int max_profit = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > max_profit)
        {
            max_profit = a[i];
        }
        else
        {
            profit[i] = max(profit[i + 1], max_profit - a[i]);
        }
    }
    int min_profit = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min_profit)
        {
            min_profit = a[i];
        }
        else
        {
            profit[i] = max(profit[i - 1], profit[i] + (a[i] - min_profit));
        }
    }
    int result = profit[n-1];
    cout<<"maximum profit is... "<<result<<endl;
}