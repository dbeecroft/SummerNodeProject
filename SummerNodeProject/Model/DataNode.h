//
//  DataNode.h
//  SummerNodeProject
//
//  Created by Denise Beecroft on 7/26/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

#ifndef DataNode_h
#define DataNode_h

#include <stdio.h>

template <class Type> // framework
class DataNode
{
private:
    Type nodeData;
    DataNode * nodePointer; // '*' symbol for pointer
public:
    // constructors
    DataNode();
    DataNode(Type nodeData);
    
    // getter and setter
    void setNodeData (Type nodeData);
    void setNodePointer (DataNode * nodePointer);
    Type getNodeData();
    DataNode * getNodePointer();
};

#endif /* DataNode_h */
