//
// Created by Ben on 3/19/2020.
//

#ifndef SLOTMACHINEHW2_GAME_H
#define SLOTMACHINEHW2_GAME_H

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "PayoutTable.h"
#include "Reel.h"
#include "SlotMachine.h"

using namespace std;

class Game {
private:
    int balance;
    int WHEELSIZE = 10;
    SlotMachine machine;
    PayoutTable payouttable;
    Reel reel_1;
    Reel reel_2;
    Reel reel_3;
    ReelNode<char> *head1 = NULL;
    ReelNode<char> *head2 = NULL;
    ReelNode<char> *head3 = NULL;
public:
    Game();
    void gameLoop();
};



#endif //SLOTMACHINEHW2_GAME_H
