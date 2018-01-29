#include <iostream>
#include "src/binaryTree.h"

using namespace std;

class Integer{
private:
    int i;
public:
    explicit Integer(int i) : i(i){}
    int getInt(){return i;}
    int setInt(int i){this->i = i;}
};

int main(){
    treeNode<Integer>* t[7];
    for(int i = 0; i < 7; i++){
        t[i] = new treeNode<Integer>(Integer(i + 1));
    }

    for(int i = 0; i < 7; i++){
        cout << t[i]->getData().getInt() << endl;
    }

    binaryTree<Integer> tree = binaryTree<Integer>(t[0]);

    t[0]->setLeft(t[1]);
    t[0]->setRight(t[2]);
    t[1]->setLeft(t[3]);
    t[1]->setRight(t[4]);
    t[2]->setRight(t[5]);
    t[3]->setLeft(t[6]);
    t[6]->setRight(new treeNode<Integer>{Integer(100)});

    int height = tree.getHeight();

    cout << "height is " << height << endl;
    return 0;
}