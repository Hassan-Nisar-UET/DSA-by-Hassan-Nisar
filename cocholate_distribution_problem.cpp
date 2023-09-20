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
    int diff = INT_MAX;
    int M;
    cout<<"Enter the number of students"<<endl;
    cin>>M;
    sort(a, a + n);
    int i = 0, j = M - 1;
    while(j < n)
    {
        diff = min(diff , a[j] - a[i]);
        i++;
        j++;
        
    }
    cout<<"the minimum difference is.. "<<diff<<endl;

  
}
