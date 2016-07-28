//
//  BinaryTree.cpp
//  SummerNodeProject
//
//  Created by Denise Beecroft on 7/28/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

#include "BinaryTree.h"

template <class Type>
BinaryTree<Type> :: BinaryTree()
{
    root = nullptr;
}

template <class Type>
void BinaryTree<Type> :: insert(Type data)
{
    BinaryTreeNode<Type> * insertedNode = new BinaryTreeNode<Type>(data);
    
    insert (insertedNode, root);
}

