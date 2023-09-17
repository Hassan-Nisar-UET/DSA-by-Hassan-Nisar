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
    int currProduct = 1;
    int maxProduct = 0;
    for(int i = 0; i < n; i++)
    {
        currProduct = currProduct * a[i];
        if(currProduct == 0)
        {
            currProduct = 1;
        }
        maxProduct = max(currProduct , maxProduct);
    }
    int Pro = 1;
    for(int i = n - 1; i >= 0; i--)
    {
        Pro = Pro * a[i];
        if(Pro == 0)
        {
            Pro = 1;
        }
        maxProduct = max(Pro , maxProduct);
    }
    cout<<"Maximim product of Subarray is..."<<maxProduct<<endl;
}