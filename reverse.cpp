#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    public:
    int data;
    node*next;

    node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    node* Head = new node(1);
    node* sec = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);

    Head->next = sec;
    sec->next = third;
    third->next = fourth;
    fourth->next = NULL;

    

    node* prev = NULL;
    node* curr = Head;
    node* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    node* temp = prev;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}