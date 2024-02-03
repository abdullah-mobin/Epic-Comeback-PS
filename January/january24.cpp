/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>ino;
    void inorder(TreeNode* root){
        // if(!root){
        //     // ino.push_back(0);
        //     return;
        // }


        // if(root->left)

        
        if(root==NULL){
            ino.push_back(0);
            return;
        }
            inorder(root->left);
        // if(root->right)
            inorder(root->right);
        ino.push_back(root->val);
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>pp,qq;
        vector<int>pp1,qq1;
        pp1.push_back(1);
        pp1.push_back(1);
        qq1.push_back(1);
        qq1.push_back(1);
        inorder(p);
        pp = ino;
        ino.clear();
        inorder(q);
        qq = ino;
        ino.clear();
        // if(pp==pp1 && qq==qq1)
        //     return false;
        // for(auto x: pp){
        //     cout << x ;
        // }
        // cout << endl;
        // for(auto x: qq){
        //     cout << x ;
        // }
        if(pp==qq)
            return true;
        else
            return false;
    }
}; 