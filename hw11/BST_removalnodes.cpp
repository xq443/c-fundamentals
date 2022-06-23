template <class T>
void BST<T>:: remove(BSTNode<T> *& temp) {
    if(temp->left == nullptr && temp->right == nullptr) { // the temp node does not have children
        if(parent == nullptr) root = nullptr;
        else if(parent->left == temp) {
            parent->left = nullptr;
        }else{
            parent->right = nullptr;
        }
        delete temp;
    }else if(temp->left == nullptr){//the temp node has one child: right child
        //promote temp->right
        BSTNode<T> * toDelete = temp->right;
        temp->data = toDelete->data;
        temp->left = toDelete->left;
        if(temp->left != nullptr;)
            temp->left->parent = temp;
        temp->right = toDelete->right;
        if(temp->right != nullptr;)
            temp->right->parent = temp;
        delete toDelete;
    }else if(temp->right == nullptr){//left child
        //promote temp->right
        BSTNode<T> * toDelete = temp->left;
        temp->data = toDelete->data;
        temp->right = toDelete->right;
        if(temp->left != nullptr;)
            temp->left->parent = temp;
        temp->right = toDelete->right;
        if(temp->right != nullptr;)
            temp->right->temp = temp;
        delete toDelete;
    }else{ //two children
        BSTNode<T> * minOfRight = temp->right;
        while(minOfRight->left != nullptr) {
            minOfRight = minOfRight -> left;
        }
        temp ->data = minOfRight->data;
        remove(minOfRight);
    }
}  