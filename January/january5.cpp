//	Coder : Abdullah Mobin
//	Created : 05/January/2024 18:55

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) 
{
    vector<int> counter(nums.size(),1);       
    int res = 0;
    for (size_t i = 1; i < nums.size(); i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            if (nums[j] < nums[i])
            {
                counter[i] = max(counter[j]+1,counter[i]);
            }            
        }        
    }
    for (auto x: counter)
    {
        res = max(res,x);
    }
    
    return res;
}



void soln()
{
    
}
int main()
{
    int __;
    cin >> __ ;
    while(__-- != 0) soln();

    return 0;
}