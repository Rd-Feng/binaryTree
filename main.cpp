#include <iostream>
#include "src/binaryTree.h"

using namespace std;

int main(){
    treeNode<int>* t[7];
    for(int i = 0; i < 7; i++){
        t[i] = new treeNode<int>(i+1);
    }

    binaryTree<int> tree = binaryTree<int>(t[0]);

    t[0]->setLeft(t[1]);
    t[0]->setRight(t[2]);
    t[1]->setLeft(t[3]);
    t[1]->setRight(t[4]);
    t[2]->setRight(t[5]);
    t[3]->setLeft(t[6]);
    t[6]->setRight(new treeNode<int>(100));

    treeNode<int> *found = tree.getEntry(1000);
    cout << found->getData() << endl;
    return 0;
}