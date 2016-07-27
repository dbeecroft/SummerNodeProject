//
//  SummerArray.h
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
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
    int lenth;
    bool * modifiedNodes;
    DataNode<Type> front;
    DataNode<Type> end;
public:
    SummerArray(int length);
    
};

#endif /* SummerArray_h */
