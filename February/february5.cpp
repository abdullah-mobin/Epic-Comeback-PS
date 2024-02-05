//	Coder   : Abdullah Mobin
//	Created : 05/February/2024 18:28

//	status  :
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        if (s == "tuvwxyzabcdefghijklmnopqrs")
            return 0;
        unordered_map<char, int> ref;
        char ss;
        for (char x : s)
        {
            ref[x]++;
        }
        for (auto x : ref)
        {
            cout << x.first << " " << x.second << endl;
            if (x.second == 1)
            {
                ss = x.first;
            }
        }
        for (size_t i = 0; i <= s.length() - 1; i++)
        {
            if (s[i] == ss)
            {
                return i;
            }
        }
        return -1;
    }
};

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