#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    map<char, int> freq;
    string str;
    getline(cin, str);
    for (auto x : str)
    {
        freq[x]++;
    }
    int a, b;
    for (auto x : freq)
    {
        if (x.first == 'A')
        {
            a = x.second;
        }
        else
        {
            b = x.second;
        }
    }
    if (a > b)
    {
        cout << "A\n";
    }
    else
    {
        cout << "B\n";
    }
    return;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int __;
    cin >> __;
    cin.ignore();
    while (__-- != 0)
    {
        map<char, int> freq;
        char str[5];
        for (size_t i = 0; i < 5; i++)
        {
            cin >> str[i];
        }

        for (auto x : str)
        {
            freq[x]++;
        }
        int a, b;
        for (auto x : freq)
        {
            if (x.first == 'A')
            {
                a = x.second;
            }
            else
            {
                b = x.second;
            }
        }
        if (a > b)
        {
            cout << "A\n";
        }
        else
        {
            cout << "B\n";
        }
    }

    return 0;
}