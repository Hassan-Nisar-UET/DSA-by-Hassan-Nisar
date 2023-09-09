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
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if( a[i] < min)
        {
            min = a[i];
        }
        else
        {
            max = a[i];
        }
    }
    cout<<"The minimum number is   "<<min<<endl;
    cout<<"The maximum number is   "<<max<<endl;
}