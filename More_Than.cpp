#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int k = 0;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    int s = 0;
    cout<<"Enter the size of array"<<endl;
    cin>>s;
    int count = 0;
    int a[s];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    unordered_map<int , int > m;
    for(int i = 0; i < n; i++)
    {
        m[a[i]] += 1;
        if(m[a[i]] > n/k)
        {
            count++;
            m[a[i]] = -70000;
        }
    }
    cout<<"occurance of numbers more than n/k are..."<<count<<endl;
    
    

}