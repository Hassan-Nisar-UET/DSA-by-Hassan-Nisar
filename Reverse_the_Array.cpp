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
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start ++;
        end --;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<"Reverse of array is"<<" "<<a[i]<<endl;
    }
}