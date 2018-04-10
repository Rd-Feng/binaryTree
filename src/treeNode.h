//
// Created by Raymond Feng on 1/29/18.
//

//#ifndef BINARYSEARCHTREE_TREENODE_H
//#define BINARYSEARCHTREE_TREENODE_H

#include <iostream>

using namespace std;

template<class T>
class treeNode {
private:
    T data;
    treeNode<T> *left = nullptr;
    treeNode<T> *right = nullptr;
public:
    //constructor

    explicit treeNode<T>(T);

    //accessor
    T getData() const;

    treeNode<T>* getLeft() const;

    treeNode<T>* getRight() const;

    //mutator
    void setData(T);

    void setLeft(treeNode<T> *);

    void setRight(treeNode<T> *);

    //overloading operator
    friend void operator<<(ostream &os, const treeNode<T> &node){
        os << node.getData();
    }

};

template<class T>
treeNode<T>::treeNode(T data) : data(data) { }

template<class T>
T treeNode<T>::getData() const { return data; }

template<class T>
treeNode<T>* treeNode<T>::getLeft() const { return left; }

template<class T>
treeNode<T>* treeNode<T>::getRight() const { return right; }

template<class T>
void treeNode<T>::setData(T newData) {data = newData; }

template<class T>
void treeNode<T>::setLeft(treeNode<T>* newNode) { left = newNode; }

template<class T>
void treeNode<T>::setRight(treeNode<T>* newNode) { right = newNode; }

//#endif //BINARYSEARCHTREE_TREENODE_H

