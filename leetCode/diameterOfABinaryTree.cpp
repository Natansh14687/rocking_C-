#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        left = right = NULL;
    }
};

// int leftLevel(TreeNode* root){
//     if(root==NULL) return 0;
//     return 1+leftLevel(root->left);
// }
// int rightLevel(TreeNode* root){
//     if(root==NULL) return 0;             // wrong way of writing code
//     return 1+leftLevel(root->right);
// }
// int diameter(TreeNode* root){
//     return leftLevel(root)+rightLevel(root)-2;
// }

int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left), levels(root->right));
}
int diameter(TreeNode* root){
    return levels(root->left)+levels(root->right);
}

int main(){
    TreeNode* a = new TreeNode(1); //root
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);
    TreeNode* h = new TreeNode(8);
    a->left = b;
    a->right = c;
    b->left = d;
    d->right = h;
    b->right = e;
    c->left = f;
    c->right = g;
    cout << diameter(a);
    return 0;
}