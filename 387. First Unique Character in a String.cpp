//	Coder : Abdullah Mobin
//	Created : 01/January/2024 18:01

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string t)
{
    int ind = -1;
    string s = t;
    string mod = t;
    for (size_t i = 0; i < s.length(); ++i)
    {
        for (size_t j = i + 1; j < s.length(); ++j)
        {
            if (s[i] == s[j])
            {
                mod.erase(remove(mod.begin(), mod.end(), s[i]), mod.end());               
                break;
            }   
        }
        
    }
    cout<<"mod s = "<< mod << endl;
    char x = mod[0];

    cout << x << endl;
    size_t index = t.find(x);

    return index;
}

void soln()
{
    string s;
    cin.ignore();
    getline(cin, s);
    cout << firstUniqChar(s) << "\n";
}
int main()
{
    int __;
    cin >> __;
    while (__-- != 0)
        soln();

    return 0;
}