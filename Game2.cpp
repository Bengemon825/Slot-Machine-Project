//
// Created by Ben on 3/19/2020.
//

#include "Reel.h"
#include "ReelNode.h"
#include "SlotMachine.h"
using namespace std;

int main() {

    ReelNode<char> *head1 = NULL;
    ReelNode<char> *head2 = NULL;
    ReelNode<char> *head3 = NULL;
    Reel<char> reel_1;
    Reel<char> reel_2;
    Reel<char> reel_3;
    reel_1.push(&head1, 'A');
    reel_1.push(&head1, 'A');
    reel_1.push(&head1, 'A');
    reel_1.push(&head1, 'A');
    reel_1.push(&head1, 'B');
    reel_1.push(&head1, 'B');
    reel_1.push(&head1, 'B');
    reel_1.push(&head1, 'C');
    reel_1.push(&head1, 'C');
    reel_1.push(&head1, '7');

    reel_2.push(&head2, 'A');
    reel_2.push(&head2, 'A');
    reel_2.push(&head2, 'A');
    reel_2.push(&head2, 'A');
    reel_2.push(&head2, 'B');
    reel_2.push(&head2, 'B');
    reel_2.push(&head2, 'B');
    reel_2.push(&head2, 'C');
    reel_2.push(&head2, 'C');
    reel_2.push(&head2, '7');

    reel_3.push(&head1, 'A');
    reel_3.push(&head1, 'A');
    reel_3.push(&head1, 'A');
    reel_3.push(&head1, 'A');
    reel_3.push(&head1, 'B');
    reel_3.push(&head1, 'B');
    reel_3.push(&head1, 'B');
    reel_3.push(&head1, 'C');
    reel_3.push(&head1, 'C');
    reel_3.push(&head1, '7');

    reel_1.printList(head1);
    reel_2.printList(head2);
    reel_3.printList(head3);

    int arr[3];
    SlotMachine machine;
    machine.Spin(arr);
}