#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int m = 0;
    cout<<"enter the value of m"<<endl;
    cin>>m;
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < m; j++)
        {
            int temp;
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
