#include <bits/stdc++.h>
using namespace std;
int main()
{
    int currSum = 0;
    int maxSum = INT_MIN;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++)
    {
        currSum = currSum + a[i];
        if(currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(currSum , maxSum);
    }
    cout<<"maximum sum of subarray with kadane's Algo is  "<<maxSum<<endl;
}