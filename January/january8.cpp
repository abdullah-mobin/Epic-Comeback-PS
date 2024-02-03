//	Coder : Abdullah Mobin
//	Created : 08/January/2024 18:33

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;


/* Solution class */

class january8
{
    /* struct TreeNode
    {
        int val;
        TreeNode *left,*right;
    }; */
    
    vector<int> result;
    
    void inorder(TreeNode *root)
    {
        if (root != NULL)
        {
            inorder(root->left);
            result.push_back(root->val);
            inorder(root->right);
        }
    }

    int rangeSumBST(TreeNode *root, int low, int high)
    {
        inorder(root);
        int sum = 0;
        for (auto x : result)
        {
            if (x >= low && x <= high)
                sum += x;
        }

        return sum;
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