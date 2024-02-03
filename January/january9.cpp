//	Coder : Abdullah Mobin
//	Created : 09/January/2024 19:20

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
    vector<int> r;
    void leafSequence(TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        if (!root->left && !root->right)
        {
            r.push_back(root->val);
        }
        if (root->left)
            leafSequence(root->left);
        if (root->right)
            leafSequence(root->right);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> r1, r2;
        leafSequence(root1);
        r1 = r;
        r.clear();
        leafSequence(root2);
        r2 = r;
        r.clear();
        if (r1 == r2)
            return true;
        else
            return false;
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