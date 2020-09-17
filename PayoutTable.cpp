//
// Created by Ben on 3/20/2020.
//

#include "PayoutTable.h"

int PayoutTable::checkCombo(char *data) {
    int payout = 0;
    if(data[0] == 'A' && data[1] == 'A' && data[2] == 'A') {
        payout = 7;
        cout << "Won $7!" << endl;
    }
    if(data[0] == 'B' && data[1] == 'B' && data[2] == 'B') {
        payout = 20;
        cout << "Won $20!" << endl;
    }
    if(data[0] == 'C' && data[1] == 'C' && data[2] == 'C') {
        payout = 75;
        cout << "Won $75!" << endl;
    }
    if(data[0] == '7' && data[1] == '7' && data[2] == '7') {
        payout = 600;
        cout << "JACKPOT!!!!" << endl;
    }
    return payout;
}
