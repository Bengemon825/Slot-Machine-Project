//
// Created by Ben on 3/19/2020.
//

#include "Game.h"

Game::Game() {  //add characters to the wheels
    balance = 100;
    char reelChars[] = {'A','A','A','A','B','B','B','C','C','7'};
    for(int i=0;i<WHEELSIZE;++i) {
        reel_1.push(&head1, reelChars[i]);
    }
    for(int i=0;i<WHEELSIZE;++i) {
        reel_2.push(&head2, reelChars[i]);
    }
    for(int i=0;i<WHEELSIZE;++i) {
        reel_3.push(&head3, reelChars[i]);
    }
}

void Game::gameLoop() { //main logic/flow
    cout << "Welcome to SlotMachine program by Ben Greenfield" << endl;
    cout << "Payout Table:" << endl;
    cout << "---------------------- " << endl;
    cout << "| Combination | payout |" << endl;
    cout << "----------------------" << endl;
    cout << "|   A A A     |  $7    |" << endl;
    cout << "|   B B B     |  $20   |" << endl;
    cout << "|   C C C     |  $75   |" << endl;
    cout << "|   7 7 7     |  $600  |" << endl;
    cout << "----------------------  " << endl;
    while(1) {
        int choice;
        cout << "Current Balance: $" << balance << endl;
        cout << "1. Spin" << endl;
        cout << "0. Exit" << endl;
        cin >> choice;
        if(choice == 1) {
            int randNums[3];
            int payout = 0;
            char spinResults[3];
            machine.SpinTest(randNums); //create 3 random numbers
            spinResults[0] = reel_1.incrementNodes(randNums[0], head1); //use each number on each reel
            spinResults[1] = reel_2.incrementNodes(randNums[1], head2);
            spinResults[2] = reel_3.incrementNodes(randNums[2], head3);
            cout << "\n" << spinResults[0] << " " << spinResults[1] << " " << spinResults[2] << endl;
            payout = payouttable.checkCombo(spinResults);
            balance += payout - 1;  //balance updated to add payout if any -1 for cost to play
            if(balance == 0) {
                cout << "You went bust! Better luck next time!" << endl;
                break;
            }
        }
        else if(choice == 0) {
            cout << "Thank you for using my program!" << endl;
            break;
        }
        else {
            cout << "Invalid Input, try again." << endl;
        }
    }
}