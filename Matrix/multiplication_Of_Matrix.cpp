#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c[2][2];
    int a[2][3] = {{1 , 2 , 3},
                   {4 , 5 , 6}};

    int b[3][2] = {{9 , 8 },
                   {6 , 5 },
                   {3 , 2 }};

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 3; k++)
            {
               c[i][j] += a[i][k] * b[k][j] ;
            }
        }
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}