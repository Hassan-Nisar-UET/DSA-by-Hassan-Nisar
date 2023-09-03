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
    int minIdx = 90000;
    int N = 1e6+2;
    int idx[N];
    for(int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    for(int i = 0; i < n; i++)
    {
        if(idx[a[i]] != -1)
        {
           minIdx = min(minIdx , idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if(minIdx == 90000)
    {
        cout<<"-1"<<endl;
    }
    else
    {
           cout<<"smallest index of first repeating element --> "<<minIdx + 1 <<endl;
    }
}