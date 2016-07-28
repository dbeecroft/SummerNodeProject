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
    
    // Create a node
    DataNode<Type> * newNode = new DataNode<Type>(data); // same as line 39 and 40
    
    if(index == 0)
    {
        addAtFront(data);
    }
    else if(index == size - 1)
    {
        add(data);
    }
    else
    {
         // Get to the spot before the spot I am adding to.
        for(int position = 0; position < index - 1; position++)
        {
            indexPointer = indexPointer->getNodePointer();
        }
        
        //newNode->setNodePointer(indexPointer->getNodePointer()); Short hand version
        
        // Pointed newNode to the address of indexPointer's next node
        DataNode<Type> * temp = indexPointer->getNodePointer();
        newNode->setNodePointer(temp);
        
        // Setting indexPointer to point to the newNode's address
        indexPointer->setNodePointer(newNode);
        
        size++;
    }
 }

template <class Type>
void SummerList<Type> :: add(Type data)
{
    DataNode<Type> * newNode = new DataNode<Type>(data);
    if(size == 0)
    {
        front = newNode;
        end = newNode;
    }
    else
    {
        end->setNodePointer(newNode);
        end = newNode;
    }
    
    size++;
}


template <class Type>
void SummerList<Type> :: addAtFront(Type data)
{
    // Create a node
    DataNode<Type> * newNode = new DataNode<Type>(data); // same as line 39 and 40
    if(size == 0)
    {
        front = newNode;
        end = newNode;
    }
    else
    {
        newNode->setNodePointer(front);
        front = newNode;
    }
    
    size++;
}

template <class Type>
Type SummerList<Type> :: remove(int index)
{
    assert(index >= 0 && index < size);
    
    Type removedValue;
    
    DataNode<Type> * indexPointer = front;
    DataNode<Type> * removedNode = nullptr;
    DataNode<Type> * next = nullptr;
    
    if(size == 1)
    {
        removedValue = front->getNodeData();
        
        delete indexPointer;
        
        front = nullptr;
        end = nullptr;
    }
    else if(index == 0)
    {
        removedValue = front->getNodeData();
        
        front = front->getNodePointer();
        
        delete indexPointer;
    }
    else
    {
        for(int position = 0; position < index - 1; position++)
        {
            indexPointer = indexPointer->getNodePointer();
        }
        
        removedNode= indexPointer->getNodePointer();
        next = removedNode->getNodePointer();
        
        if(removedNode == end)
        {
            end = indexPointer;
        }
        
        indexPointer->setNodePointer(next);
        removedNode->setNodePoionter(nullptr);
        
        removedValue = removedNode->getNodeData();
        
        delete removedNode;
    }
    
    
    size--;
    return removedValue;
}

template <class Type>
bool SummerList<Type> :: contains(Type data)
{
    bool isInList = false;
    
    DataNode<Type> * containsPointer = front;
    
    for(int index = 0; index < size; index++)
    {
        if(data == containsPointer->getNodeData())
        {
            isInList = true;
        }
        containsPointer = containsPointer->getNodePointer();
    }
    
    
    return isInList;
}