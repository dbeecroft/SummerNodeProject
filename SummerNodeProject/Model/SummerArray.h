//
//  SummerArray.h
//  SummerNodeProject
//
//  Created by Denise Beecroft on 7/27/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

#ifndef SummerArray_h
#define SummerArray_h

#include <stdio.h>
#include "DataNode.h"

template <class Type>
class SummerArray
{
private:
    int length;
    bool * modifiedNodes;
    DataNode<Type> * front;
    DataNode<Type> * end;
public:
    SummerArray(int length);
    
    Type getFromIndex(int index);
    Type getFirst();
    Type getLast();
    void setAtIndex(int index, Type data);
    
    void sort();
    void resize(int newSize);
    int getUnusedNodes();
    int getLength();
    
};

#endif /* SummerArray_h */
