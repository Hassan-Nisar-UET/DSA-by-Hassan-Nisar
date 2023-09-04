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
    const int N = 1e6+2;
    bool idx[N];
    for(int i = 0; i < N; i++)
    {
        idx[i] = false;
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= 0)
        {
            idx[a[i]] = true;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(idx[i] == false)
        {
            cout<<"The smallest positive missing number is"<<" "<<i<<endl;
            break;
        }
    }
}