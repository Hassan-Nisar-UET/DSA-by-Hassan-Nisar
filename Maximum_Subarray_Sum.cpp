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
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for(int k = i; k <= j; k++)
            {
                sum = sum + a[k];
                if(sum > maxSum)
                {
                    maxSum = sum;
                }
            }
        }
        
    }
    cout<<"maximum sum of sub array is  "<<maxSum<<endl;
    
}