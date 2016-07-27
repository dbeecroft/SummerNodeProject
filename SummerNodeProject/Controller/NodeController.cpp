//
//  NodeController.cpp
//  SummerNodeProject
//
//  Created by Denise Beecroft on 7/26/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

#include "NodeController.h"
#include "../Model/DataNode.cpp"
#include "../Model/SummerArray.cpp"
#include <string>
#include <iostream>

using namespace std;

void NodeController :: tryNodes()
{
    DataNode<int> numberNode;
    DataNode<string> wordNode;
    cout << "Before" << endl;
    cout << numberNode.getNodeData() << endl;
    cout <<"After" << endl;
    numberNode.setNodeData(231);
    cout << numberNode.getNodeData() << endl;
}

void NodeController :: tryArray()
{
    SummerArray<int> testArray(3);
}

void NodeController :: start()
{
    tryArray();
}
