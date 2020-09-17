//
// Created by Ben on 3/19/2020.
//

#ifndef SLOTMACHINEHW2_REEL_H
#define SLOTMACHINEHW2_REEL_H


#include <stdio.h>
#include <iostream>
#include "ReelNode.h"

using namespace std;

class Reel{
private:
    ReelNode<char> *head;


public:
//    void reelSetup(T data);
    void push(ReelNode<char> **head_ref, char data); //function that creates a node and stores data
    void printList(ReelNode<char> *head);   //print list of nodes   //change so that not pass thru, use private - TODO
    char incrementNodes(int num, ReelNode<char> *head);
    void test(ReelNode<char> *head);
    void fancyLetters();

};

#endif //SLOTMACHINEHW2_REEL_H
