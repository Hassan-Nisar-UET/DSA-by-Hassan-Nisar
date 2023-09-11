#include<bits/stdc++.h>
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
       int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    priority_queue <int> maxHeap;
    for(int i = 0; i < n; i++)
    {
        maxHeap.push(a[i]);
        if(maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }
    cout<<"Kth smallest element is  "<<maxHeap.top()<<endl;
}