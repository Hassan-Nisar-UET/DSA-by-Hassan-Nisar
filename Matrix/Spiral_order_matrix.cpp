#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][6] = {{1, 5,  7, 9,10,11},
                   {6, 10,12,13,20,21},
                   {9, 25,29,30,32,41},
                   {15,55,59,63,68,70},
                   {40,70,79,81,95,105}};
    int startRow = 0; int startCol = 0; int endRow = 4; int endCol = 5;

while(startRow <= endRow && startCol <= endCol)
{
    for(int col = startRow; col <= endCol; col++)
    {
        cout<<a[startRow][col]<<endl;
        
    }startRow++;
    for(int row = startRow; row <= endRow; row++)
    {
        cout<<a[row][endCol]<<endl;
        
    }endCol--;
    for(int col = endCol; col>= startCol; col--)
    {
        cout<<a[endRow][col]<<endl;
        
    }endRow--;
    for(int row = endRow; row >= startRow; row--)
    {
        cout<<a[row][startCol]<<endl;
        
    }startCol++;
}

    
}