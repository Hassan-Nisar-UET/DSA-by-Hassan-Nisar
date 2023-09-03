#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 2;
    int Curr = 2;
    int j = 2 ;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
     int priv_Diff = a[1] - a[0];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    while( j < n )
    {
        if(priv_Diff == a[j] - a[j-1])
        {
            Curr ++;
        }
        else
        {
            priv_Diff = a[j] - a[j-1];
            Curr = 2;
        }
        ans = max(ans,Curr);
        j++;
    }
    cout<<"Maximum sub array length is"<<"-->"<<ans<<endl;

}