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
    node * head = new node(10);
    node * second = new node(20);
    node * third = new node(30);
    node * fourth = new node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth ->next = nullptr;

    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    //insertion

    node* temp1;
    temp1 = new node(5);
    temp1->next = head;
    head = temp1;

    cout<<endl;
    node*temp2 = head;
    while(temp2!=NULL){
        cout<<temp2->data<<" ";
        temp2 = temp2 ->next;
    }
}