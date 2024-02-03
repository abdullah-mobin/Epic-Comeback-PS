//	Coder : Abdullah Mobin
//	Created : 21/January/2024 21:35

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        // if(nums.size()==2) return max(nums[0],nums[1]);

        // int res = 0, c = 1;
        // for(auto x: nums){
        //     if(c%2==1)
        //         res+=x;
        //     c++;
        // }
        int rob = 0;
        int norob = 0;
        for (int i = 0; i < nums.size(); i++) {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(rob, norob);

        // return res;
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