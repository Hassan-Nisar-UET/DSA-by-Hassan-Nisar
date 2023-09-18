#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums{4 , 1 , 5 , 3 , 2};
    int idx1 = -1;
    for(int i = nums.size() - 1; i >= 0; i--)
    {
        if(nums[i] < nums[i + 1])
        {
            idx1 = i;
            break;
        }
    }
    
    if(idx1 == -1)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        int idx2 = 0;
        for(int i = nums.size(); i >= 0; i--)
        {
             if(nums[i] > nums[idx1])
             {
                idx2 = i;
                break;
             }
        }
        swap(nums[idx1] , nums[idx2]);
        sort(nums.begin()+idx1+1, nums.end());
    }
    for(int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<endl;
    }
}