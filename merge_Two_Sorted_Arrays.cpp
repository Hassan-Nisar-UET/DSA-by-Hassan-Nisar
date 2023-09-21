#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[6] = {1,2,3,0,0,0};
    int b[3] = {2,5,6};
    int i = 2;
    int j = 2;
    int k = 5;
    while(i >= 0 && j >= 0)
    {
        if(a[i] > b[j])
        {
            a[k] = a[i];
            i--;
            k--;
        }
        else
        {
            a[k] = b[j];
            j--;
            k--;
        }
    }

    for(int i = 0; i < 6; i++)
    {
        cout<<a[i]<<endl;
    }

    
}