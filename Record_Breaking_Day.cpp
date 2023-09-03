#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int max = -1;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(n == 1)
    {
        return 0;
    }
    int i = 0;
    while(i < n)
    {
        if(a[i-1] < a[i] && a[i] > a[i+1] && max < a[i])
        {
            count++;
            max = a[i];
        }
        i++;
    }
    
     cout<<"count of the record breaking days"<<count<<" "<<"maximum people visit on record breaking day"<<max<<endl;

}