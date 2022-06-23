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
int FindMin(BSTNode* root) {
    if(root == nullptr) {
        cout<<"Tree is empty\n";
        return -1;
    }
    while(root->left != nullptr) {
        root = root->left;
    }
    return root->data;
}
int FindMax(BSTNode* root) {
    if(root == nullptr) {
        cout<<"Tree is empty\n";
        return -1;
    }else if(root->right == nullptr) {
        return root->data;
    }else
        return FindMax(root->right);
    // while(root->right != nullptr) {
    //     root = root->right;
    // }
    // return root->data;
}
int FindHeight(BSTNode* root){
    if(root == nullptr) return -1;
    return max(FindHeight(root->right), FindHeight(root->left)) + 1;
}
int main() {
    BSTNode* root = nullptr;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    int min, max, height;
    min = FindMin(root);   
    max = FindMax(root);
    height = FindHeight(root);
    cout<<min<<" and "<<max<<"\n";
    cout<<"Height is: "<<height;
}
