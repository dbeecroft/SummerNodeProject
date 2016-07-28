//
//  BinaryTreeNode.hpp
//  SummerNodeProject
//
//  Created by Denise Beecroft on 7/28/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h

#include <stdio.h>
#include"DataNode.h"

template <class Type>
class BinaryTreeNode : public DataNode<Type>
{
private:
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rightChild;
    BinaryTreeNode<Type> * parent;
public:
    // 2 contructors
    BinaryTreeNode();
    BinaryTreeNode<Type>(Type data);
    
    // 2 getters
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
    BinaryTreeNode<Type> * getParent();
    
     //2 setters
    void setRightChild(BinaryTreeNode<Type> * rightChild);
    void setLeftChild(BinaryTreeNode<Type> * leftChild);
    void setParent(BinaryTreeNode<Type> * parent);
};


#endif /* BinaryTreeNode_h */
