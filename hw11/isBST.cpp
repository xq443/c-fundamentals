#include <iostream>
using namespace std;

struct BSTNode
{
    int data;
    BSTNode* left;
    BSTNode* right;
};
BSTNode* GetNewNode(int data) {
    BSTNode * newNode = new BSTNode();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}
//FUNCTION to insert in BST, returns the address of the root node
BSTNode* Insert(BSTNode* root, int data){
    if(root == nullptr) {
        root = GetNewNode(data);
    }else if(data <= root->data) {
        root->left = Insert(root->left, data);
    }else{
        root->right = Insert(root->right, data);
    }
    return root;
}
bool isBSTUtil(BSTNode* root, int minVal, int maxVal) {
    if(root == nullptr) return true;
    if(root->data < maxVal && root->data > minVal
        && isBSTUtil(root->left, minVal, root->data)
        && isBSTUtil(root->right, root->data, maxVal)) 
        return true;
    else return false;
}
bool isBST(BSTNode* root) {
    return isBSTUtil(root, INT_MAX, INT_MIN);
}
int main() {
    BSTNode* root = nullptr;
    root = Insert(root, 15);
    root = Insert(root, 100);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    if(isBST) cout<<"IS BST";
    else cout<<"NOT BST";
}


