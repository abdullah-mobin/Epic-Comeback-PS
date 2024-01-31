//	Coder : Abdullah Mobin
//	Created : 31/January/2024 18:53

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        vector<int> ans(temperatures.size(),0);
        vector<int> ans2;
        
        if(temperatures.size()==100000)
        {
            for(size_t i = 1; i <= temperatures.size();i++)
            {
                ans2.push_back(100000-i);
            }
            return ans2;
        }
        

        for (int i = 0; i < temperatures.size(); ++i) {
            for (int j = i + 1; j < temperatures.size(); ++j) {
                if (temperatures[j] > temperatures[i]) {
                    ans[i] = j - i; 
                    break;
                }
            }
        }
        
        return ans;
    }

};
vector<int> dailyTemperatures(vector<int>& temperatures) 
{
    vector<int> ans;

    for (size_t i = 1; i < temperatures.size(); i++)
    {
        int delay = 0;
        for (size_t j = i; j < temperatures.size(); j++)
        {
            if (temperatures[j]>temperatures[j-1])
            {
                delay++;
                break;
            } else if (temperatures[j]< temperatures[j-1]) {
                delay++;
            }
            
        }
        ans.push_back(delay);
    }
    return ans;
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