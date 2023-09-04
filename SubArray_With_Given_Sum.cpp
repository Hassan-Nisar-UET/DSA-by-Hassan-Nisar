#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s = 0;
    cout<<"enter the value of s"<<endl;
    cin>>s;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int i = 0 , j = 0 , sum = 0 , st = -1 , end = -1;
    while(j < n && sum + a[j] <= s)
    {
        sum = sum + a[j];
        j++;
    }
    if(sum == s)
    {
        cout<<"starting index is  "<<i + 1<<"ending index is  "<<j<<endl;
    }
    while(j < n)
    {
        sum = sum + a[j];
        while(sum > s)
        {
           if(sum > s)
           {
             sum = sum - a[i];
             i++;
           } 
        }
        if(sum == s)
        {
            st = i + 1;
            end = j + 1;
            break;
        }
        
        j++;

        
    }
    cout<<"starting index is  "<<st<<"   ending index is  "<<end<<endl;
}