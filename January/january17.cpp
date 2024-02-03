//	Coder : Abdullah Mobin
//	Created : 17/January/2024 19:17

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    vector<int>u;
    map<int, int> occurance;
    for (auto x : arr)
    {
        occurance[x]++;
    }

    for (auto x : occurance)
    {
        int i = x.second;
        u.push_back(i);
    }
    sort(u.begin(),u.end());
    for (size_t i = 1; i < u.size(); i++)
    {
        if(u[i]==u[i-1]){
            return false;
        }
    }
    return true;
    

}

void soln()
{
}
int main()
{
    int __;
    cin >> __;
    while (__-- != 0)
        soln();

    return 0;
}