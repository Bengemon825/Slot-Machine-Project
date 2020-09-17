//
// Created by Ben on 3/19/2020.
//

#include "Reel.h"
//template <typename T>


//template<> void Reel<char>::reelSetup(char data) {
//
//}


void Reel::push(ReelNode<char> **head_ref, char data)
{
    ReelNode<char> *ptr1 = new ReelNode<char>();
    ReelNode<char> *temp = *head_ref;
    ptr1->data = data;
    ptr1->next = *head_ref;

    /* If linked list is not NULL then
  set the next of last node */
    if (*head_ref != NULL)
    {
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1; /*For the first node */
    *head_ref = ptr1;
}

void Reel::printList(ReelNode<char> *head) {
    ReelNode<char> *temp = head;
    if (head != NULL) {
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
}

char Reel::incrementNodes(int num, ReelNode<char> *head) {  //what moves through the wheels
    ReelNode<char> *temp = head;
    if(head != NULL) {
        for(int i=0;i<num;++i) {
            temp = temp->next;
        }
    }
    else {
        cout << "Yikes something's wrong" << endl;
    }
    return temp->data;
}

void Reel::test(ReelNode<char> *head) {
    ReelNode<char> *temp = head;

    cout << temp->data << endl;
}

void Reel::fancyLetters() {

}