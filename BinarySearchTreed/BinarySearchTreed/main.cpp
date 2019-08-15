//
//  main.cpp
//  BinarySearchTreed
//
//  Created by Сергей Терехин on 15/08/2019.
//  Copyright © 2019 Сергей Терехин. All rights reserved.
//


#include "BSTreed.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    BinarySearchTreed *bst = new BinarySearchTreed();
    bst->Empty_treed(bst->treed);
    bst->Show(bst->treed);
    for(int i = 5; i > 0; i--)
    {
        bst->Add_Node(i, bst->treed);
    }
    bst->Show(bst->treed);
    bst->Empty_treed(bst->treed);

    return 0;
}
