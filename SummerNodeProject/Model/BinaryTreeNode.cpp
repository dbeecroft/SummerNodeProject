//
//  BinaryTreeNode.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

#include "BinaryTreeNode.h"

template<class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : DataNode<Type>()
{
    parent = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : DataNode<Type>(data)
{
    
}