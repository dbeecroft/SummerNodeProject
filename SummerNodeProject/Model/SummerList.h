//
//  SummerList.h
//  SummerNodeProject
//
//  Created by Denise Beecroft on 7/27/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

#ifndef SummerList_h
#define SummerList_h

#include <stdio.h>
#include "DataNode.h"

template<class Type>
class SummerList
{
private:
    int size;
    DataNode<Type> * front;
    DataNode<Type> * end;
public:
    SummerList();
        
    Type getFromIndex(int index);
    Type getFirst();
    Type getLast();
    Type setAtIndex(int index, Type data);
        
    int getSize();
    void addAtIndex(int index,Type data);
    void add(Type data);
    void addAtFront(Type data);
    Type remove(int index);
    bool contains(Type data);
        
    };

#endif /* SummerList_hpp */
