#include <bits/stdc++.h>
using namespace st;
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
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            for(int k = i; k < n; k++)
            {
                cout<<a[k];
                endl;
            }
        }
    }
}