#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int data ;
    node *next;
};

void printList(node *n)
{
    while(n!=NULL)
    {
        cout<< n->data ;
        n=n->next;
    }
}

int main()
{
    node *head=NULL ;
    node *second=NULL ;
    node *third=NULL ;

    head = new node ;
    second = new node ;
    third = new node ;

    head->data = 10;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printList(head);

    return 0;
}
