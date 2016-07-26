//
//  main.cpp
//  SummerNodeProject
//
//  Created by Denise Beecroft on 7/26/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

#include <iostream>
#include "Controller/NodeController.h"

int main()
{
    // insert code here...
    std::cout << "Starting NodeController" << std::endl;
    NodeController * app = new NodeController();
    app ->start();
    std::cout <<"Ending NodeController" << std::endl;
    return 0;
}
