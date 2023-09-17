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
    int j = i + 1;
    while (i <= n-1 && j <= n-1)
    {
        if(a[i] == a[j])
        {
            cout<<a[i]<<endl;
            break;
        }
        
        if(j == n-1)
        {
            i = i + 1;
            j = i + 1;
        }
        
        if(a[i] == a[j])
        {
            cout<<a[i]<<endl;
            break;
        }
        j++;
    }
    

}