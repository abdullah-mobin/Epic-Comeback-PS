//	Coder : Abdullah Mobin
//	Created : 11/January/2024 18:47

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
    int diff = 0;
    void differ(TreeNode *root, int minVal, int maxVal)
    {
        if (!root)
            return;
        diff = max(diff, max(abs(minVal - root->val), abs(maxVal - root->val)));
        minVal = min(minVal, root->val);
        maxVal = max(maxVal, root->val);
        differ(root->left, minVal, maxVal);
        differ(root->right, minVal, maxVal);
    }

    int maxAncestorDiff(TreeNode *root)
    {
        if (!root)
            return 0;
        int minVal = root->val, maxVal = root->val;
        differ(root, minVal, maxVal);
        return diff;
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