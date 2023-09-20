#include <bits/stdc++.h>
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
     int x;
    cout<<"Enter the value of sum"<<endl;
    cin>>x;
    sort(a , a + n);
    for(int i = 0; i < n; i++)
    {
        int k = i + 1 , l = n - 1;
        int y = x - a[i];
        while(k < l)
        {
            if(a[k] + a[l] == y)
            {
                cout<<"found"<<endl;
            }
            else if(a[k] + a[l] > y)
            {
                l--;
            }
            else
            {
                k++;
            }
        }
    }
}
