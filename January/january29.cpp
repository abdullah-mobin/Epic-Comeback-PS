//	Coder : Abdullah Mobin
//	Created : 29/January/2024 19:14

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size(), l=0,r=n-1;
        vector<int>res;
        for(size_t i =0;i<n;i++){
            if(nums[i]==target)
                res.push_back(i);
        }
        
        return res; 
    }
};


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