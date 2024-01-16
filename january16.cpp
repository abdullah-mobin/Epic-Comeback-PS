//	Coder : Abdullah Mobin
//	Created : 16/January/2024 19:26

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

class RandomizedSet {
    set<int>s;
public:
    RandomizedSet() {}
    bool insert(int val) {
        if(s.find(val) != s.end()){
            return false;
        }
        s.insert(val);
        return true;
    }
    bool remove(int val) {
        if(s.find(val) == s.end()){
            return false;
        }
        s.erase(val);
        return true;
    }
    int getRandom() {
        int pos = rand() % s.size();
        return *next(s.begin(), pos);
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