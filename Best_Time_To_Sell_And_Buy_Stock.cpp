#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int RightMax = a[n-1];
    int MaxProfit = 0;
    for(int i = n-2; i >= 0;  i--)
    {
        RightMax = max(a[i] , RightMax);
        MaxProfit = max(MaxProfit , RightMax - a[i]);
    }
    cout<<"Maximum profit is..."<<MaxProfit<<endl;
}