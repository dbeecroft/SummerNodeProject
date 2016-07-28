//
//  BinaryTree.h
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h

#include <stdio.h>
#include "BinaryTreeNode.h"

template <class Type>
class BinaryTree
{
private:
    BinaryTreeNode<Type> * root;
public:
    BinaryTree();
    void insert(Type data);
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    int calculateSize();
    bool remove(Type data);
};

#endif /* BinaryTree_hpp */
