#include <bits/stdc++.h>
using namespace std;
int Kadanes(int a[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++)
    {
       currSum = currSum + a[i];
       if(currSum < 0 )
       {
        currSum = 0;
       }
       maxSum = max(currSum , maxSum);

    }
    return maxSum;
}
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
    int wrapSum = 0;
    int nonRapSum = 0;
    int TotalSum = 0;
    nonRapSum = Kadanes(a , n);

    for(int i = 0; i < n; i++)
    {
        TotalSum = TotalSum + a[i];
        a[i] = a[i] * -1;
    }


    wrapSum = TotalSum + Kadanes(a , n);
    cout<<"Maximum sum of circular subarray"<<max(wrapSum , nonRapSum)<<endl;
        


}