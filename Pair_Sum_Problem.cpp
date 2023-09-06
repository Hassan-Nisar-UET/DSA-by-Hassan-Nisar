#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0;
    cout<<"Enter value of k"<<endl;
    cin>>k;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool flag = false;
    int low = 0;
    int heigh = n-1;
    while (low <= heigh)
    {
        if(a[low] + a[heigh] == k)
        {
            cout<<low<<" "<<heigh<<endl;
            flag = true;
            break;
        }
        else if(a[low] + a[heigh] < k)
        {
            low++;
        }
        else if(a[low] + a[heigh] > k)
        {
            heigh--;
        }
    }
    if(flag == false)
    {
        cout<<"sum is not found"<<endl;
    }
    
}