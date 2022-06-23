template <class T>
class BSTNode{
    BSTNode<T> *parent, *left, *right;
    T data;

private:
    /* data */
public:
    BSTNode(T data): 
        data(data),
        parent(nullptr),
        left(nullptr),
        right(nullptr){}
