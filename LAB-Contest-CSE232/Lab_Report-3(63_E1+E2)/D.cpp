#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    string s, c;
    cin >> s >> c;

    for (size_t i = 0; i < s.size(); i++)
    {
        int x = i;
        for (size_t j = s.size() - 1; j > i; j--)
        {
            if (s[j] < s[x])
            {
                x = j;
            }
        }
        if (x != i)
        {
            swap(s[x], s[i]);
            break;
        }
    }
    if (s < c)
    {
        cout << s << endl;
    }
    else
    {
        cout << "---" << endl;
    }
}
int main()
{

    int __;
    cin >> __;
    while (__-- != 0)
        soln();

    return 0;
}