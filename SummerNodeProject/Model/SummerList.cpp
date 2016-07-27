//
//  SummerList.cpp
//  SummerNodeProject
//
//  Created by Denise Beecroft on 7/27/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

#include "SummerList.h"
#include <assert.h>

template<class Type>
SummerList<Type> :: SummerList()
{
    // Constructors
    size = 0;
    front = nullptr;
    end = nullptr;
}

template <class Type>
void SummerList<Type> :: addAtIndex(int index, Type data)
{
    assert(index >=0 && index <= size);
    // Different from array - we can add to the end.
    DataNode<Type> * indexPointer = front;
    
    // Get to the spot before the spot I am adding to.
    for(int position = 0; position < index - 1; position++)
    {
        indexPointer = indexPointer->getNodePointer();
    }
    
    // Create a node
    DataNode<Type> * newNode = new DataNode<Type>(data); // same as line 39 and 40
    
    newNode->setNodePointer(indexPointer->getNodePointer());
    
    //DataNode<Type> * temp = indexPointer->getNodePointer();
    //newNode->setNodePointer(temp);
}