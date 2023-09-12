#include<bits/stdc++.h>
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
    int i = 0;
    int j = 0;
    int k = n-1;
    while(j <= k)
    {
        if(a[j] == 0)
        {
            swap(a[i], a[j]);
            i++;
            j++;
        }
        else if(a[j] == 1)
        {
            j++;
        }
        else
        {
            swap(a[j], a[k]);
            k--;
        }
        
    }
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}