#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
     int a;
    cout<<"Enter the size of a"<<endl;
    cin>>a;
     int b;
    cout<<"Enter the size of b"<<endl;
    cin>>b;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i = 0 ;
    int j = 0 ; 
    int k = n - 1;
    while (i <= k)
    {
        if(arr[j] < a)
        {
            swap(arr[j] , arr[i]);
            i++;
            j++;
        }
        else if(arr[j] > b)
        {
            swap(arr[j] , arr[k]);
            k--;
        }
        else
        {
            j++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}