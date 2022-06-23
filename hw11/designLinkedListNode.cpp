#include <iostream>
using namespace std;

template <class T>
class LListNode{
    T data; //Item to be stored
    LListNode<T>* next; //Pointer to the next node

public: 
    LListNode(T newdata = T(), LListNode<T>* newNext = nullptr) : data(newdata) , next(newNext){} //constructor
    friend class LList<T>; //friend
}
