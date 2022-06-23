#include <iostream>
#include <queue>
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
void levelOrder(BSTNode* root) {
    if(root == nullptr) return;
    queue<BSTNode*> Q;
    Q.push(root);
    while(!Q.empty()){ //while there is at least one discovered node
        BSTNode* curr = Q.front();
        cout<<curr->data<<" ";
        if(curr->left != nullptr) Q.push(curr->left);
        if(curr->right != nullptr) Q.push(curr->right);
        Q.pop(); //remove the element at the front
    }
}
void preOrder(BSTNode* root) {
    if(root == nullptr) return;
    printf("%i ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(BSTNode* root) {
    if(root == nullptr) return;
    inOrder(root->left);
    printf("%i ", root->data);
    inOrder(root->right);
}
void postOrder(BSTNode* root) {
    if(root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%i ", root->data);
}
int main() {
    BSTNode* root = nullptr;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    
    levelOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);

    return -1;
}


