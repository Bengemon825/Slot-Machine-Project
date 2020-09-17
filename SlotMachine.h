//
// Created by Ben on 3/19/2020.
//

#ifndef SLOTMACHINEHW2_SLOTMACHINE_H
#define SLOTMACHINEHW2_SLOTMACHINE_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "Reel.h"
#include "ReelNode.h"


using namespace std;

class SlotMachine {
private:


public:
    void Spin(Reel reel, ReelNode<char> *head);
    int SpinTest(int *randNums);
};



#endif //SLOTMACHINEHW2_SLOTMACHINE_H
