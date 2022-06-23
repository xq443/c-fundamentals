#include <iostream>
using namespace std;

struct BSTNode
{
    int data;
    BSTNode* left;
    BSTNode* right;
};
BSTNode* FindMin(BSTNode* root) {
    while(root->left != nullptr) root = root->left;
    return root;
}
BSTNode* Delete(BSTNode* root, int data)
{
    if(root == nullptr) return root;
    else if(data < root->data) Delete(root->left, data);
    else if(data > root->data) Delete(root->right, data);
    else{
        //Case 1: No child
        if(root->left == nullptr && root->right == nullptr) {
            delete root;
            root == nullptr;
        //Case 2: 1 child
        }else if(root->left == nullptr) {
            BSTNode* temp = root; //store the address of the current node I'm trying to delete
            root = root->right;
            delete temp;
        }else if(root->right == nullptr) {
            BSTNode* temp = root; //store the address of the current node I'm trying to delete
            root = root->left;
            delete temp;
        //Case 3: 2 children
        }else{
            BSTNode* temp = FindMin(root->right);
            root->data = temp->data; //assign the min to the root
            root->right = Delete(root->right, temp->data);//delete the min
        }
    }
    return root;
};

void Inorder(BSTNode* root) {
    if(root == nullptr) return;
    Inorder(root->left);
    printf("%d", root->data);
    Inorder(root->right);
}
BSTNode* GetNewNode(int data) {
    BSTNode * newNode = new BSTNode();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}
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
int main() {
    BSTNode* root = nullptr;
    root = Insert(root, 5);
    root = Insert(root, 10);
    root = Insert(root, 3);
    root = Insert(root, 4);
    root = Insert(root, 1);
    root = Insert(root, 12);

    root = Delete(root, 5);
    cout<<"Inorder: ";
    Inorder(root);
    cout<<"\n";
}


