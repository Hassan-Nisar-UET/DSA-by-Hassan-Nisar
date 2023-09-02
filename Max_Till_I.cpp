#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max = -123456;
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
        if(a[i] > max)
        {
            max = a[i];
        }
        cout<<"The maximum number is"<<" "<<max<<endl;
    }
}