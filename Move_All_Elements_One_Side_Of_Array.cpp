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
    int j = n-1;
    while (i < j)
    {
        if(a[i] < 0 && a[j] > 0)
        {
            i++;
            j--;
        }
        else if(a[i] > 0 && a[j] < 0)
        {
            swap(a[i] , a[j]);
            i++;
            j--;
        }
        else if(a[i] < 0 && a[j] < 0)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
}