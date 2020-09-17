//
// Created by Ben on 3/19/2020.
//

#include "SlotMachine.h"
using namespace std;
void SlotMachine::Spin(Reel reel, ReelNode<char> *head) {
//    int randNums[3];
//    srand(time(0));
//    for(int i=0;i<3;++i) {
//        randNums[i] = (rand() % 100) + 1;
//        reel.incrementNodes(randNums[i], head);
//    }
    int randNum;
    srand(time(0));
    randNum = (rand() % 100) + 1;
    reel.incrementNodes(randNum, head);
}


int SlotMachine::SpinTest(int *randNums) {
    srand(time(0));
    for (int i = 0; i < 3; ++i) {
        randNums[i] = (rand() % 100) + 1;
    }
}