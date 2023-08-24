// sorted insertion in doubly linkrd list
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

node *head=NULL;

void sortedinsert(int x){
    node *n=new node(x);
    if(head==NULL){
        head=n;
    }
    else if(head->data>x){
        n->next=head;
        head->prev=n;
        head=n;
    }
    else{
        node *small=NULL;
        node *big=head;
        while(big->data<x&&big->next!=NULL){
            big=big->next;
        }
        if(big->next==NULL&&big->data<x){
            n->prev=big;
            big->next=n;
            return;
        }
        small=big->prev;
        n->next=small->next;
        n->prev=big->prev;
        small->next=n;
        big->prev=n;
    }
}

void print(){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    srand(time(0));
    int n,x;
    cout<<"enter the no. of element in linked list : ";
    cin>>n;
    for(int i=0;i<n;i++){
        x=rand()%100;
        sortedinsert(x);
    }
    print();

    return 0;
}
