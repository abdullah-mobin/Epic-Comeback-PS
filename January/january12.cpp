//	Coder : Abdullah Mobin
//	Created : 12/January/2024 18:10

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
    int countVowels(string str)
    {
        set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int count = 0;
        for (char c : str)
        {
            if (vowels.count(c) > 0)
            {
                count++;
            }
        }
        return count;
    }
    bool halvesAreAlike(string s)
    {

        int length = s.length();
        int midPoint = length / 2;

        string firstHalf = s.substr(0, midPoint);
        string secondHalf = s.substr(midPoint);

        return countVowels(firstHalf) == countVowels(secondHalf);
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