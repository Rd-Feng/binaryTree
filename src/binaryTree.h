//
// Created by Raymond Feng on 1/29/18.
//

//#ifndef BINARYSEARCHTREE_BINARYTREE_H
//#define BINARYSEARCHTREE_BINARYTREE_H
#include <iostream>
#include "treeNode.h"

template<class T>
class binaryTree {
private:
    treeNode<T> *root = nullptr;
public:

    explicit binaryTree<T>(treeNode<T> *root);

    void setRoot(treeNode<T> *root);

    bool isEmpty() const;

    int getHeight() const;

    int getNumberOfNodes() const;

    treeNode<T>* getRoot() const;

    void clear();

    T getEntry(const T &anEntry) const;

    bool contains(const T &anEntry) const;

    void preorderTraverse(treeNode<T>* root) const;

    void inorderTraverse(treeNode<T>* root) const;

    void postorderTraverse(treeNode<T>* root) const;
};


template<class T>
binaryTree<T>::binaryTree(treeNode<T> *root) : root(root) { }

template<class T>
treeNode<T>* binaryTree<T>::getRoot() const {return this->root;}

template<class T>
void binaryTree<T>::setRoot(treeNode<T> *root){
    this->root = root;
}

template<class T>
bool binaryTree<T>::isEmpty() const { return root == nullptr; }

template<class T>
int binaryTree<T>::getHeight() const {
    if(root == nullptr){
        return 0;
    }
    else{
        binaryTree<T> leftTree = binaryTree<T>(this->root->getLeft());
        binaryTree<T> rightTree = binaryTree<T>(this->root->getRight());
        return 1 + max(leftTree.getHeight(), rightTree.getHeight());
    }
    //return getHeightHelper(root);
}

template<class T>
int getNodeNumHelper(treeNode<T> *root) {
    if (root == nullptr) {
        return 0;
    }
    else {
        return 1 + getNodeNumHelper(root->getLeft()) + getNodeNumHelper(root->getRight());
    }
}

template<class T>
int binaryTree<T>::getNumberOfNodes() const { return getNodeNumHelper(root); }

template<class T>
void clearHelper(treeNode<T> *subRoot) {
    if (subRoot == nullptr) {
        return;
    }
    else {
        clearHelper(subRoot->getLeft());
        clearHelper(subRoot->getRight());
        delete subRoot;
        return;
    }
}

template<class T>
void binaryTree<T>::clear() { clearHelper(root); }

template <class T>
T getEntry(const T &anEntry){
    /*
     * recursive helper function
     */
    return NULL;
}