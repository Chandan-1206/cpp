// circular linked list-split
#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};


void insertend(int x,node* &rear){
    node *temp=new node(x);
    if(rear==NULL){
        temp->next=temp;
    }
    else{
        temp->next=rear->next;
        rear->next=temp;
    }
    rear=temp;
}

void split(node* &r1,node* &r2){
    node *slow=r1->next;
    node *fast=r1->next;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(fast!=r1 && fast->next!=r1);
    node* temp=r1->next;
    r2=r1;
    r1=slow;
    r2->next=slow->next;
    r1->next=temp;
}

void print(node* &rear){
    node *temp=rear->next;
    while(temp!=rear){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}


int main()
{
    node *r1,*r2;
    int x;
    for(int i=0;i<13;i++){
        x=rand()%10;
        insertend(x,r1);
    }
    cout<<"original cll : \n";
    print(r1);
    split(r1,r2);
    cout<<"splitted first cll : \n";
    print(r1);
    cout<<"splitted second cll : \n";
    print(r2);
    
    return 0;
}
