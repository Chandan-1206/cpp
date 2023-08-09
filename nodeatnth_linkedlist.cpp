// insert node at nth position in a linked list
#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};
node *head=NULL;

void insert(int data,int n){
    node *temp=new node();
    temp->data=data;
    temp->next=NULL;
    if(n==1||head==NULL){
        temp->next=head;
        head=temp;
    }
    else{
        node *prev=head;
        int i=0;
        while(i<n-2&&prev->next!=NULL){
            prev=prev->next;
            i++;
        }
        temp->next=prev->next;
        prev->next=temp;
    }
}

void print(){
    node *temp=head;
    cout<<"LINKED LIST:\n";
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}

int main()
{
    int data,n;
    cout<<"enter 0 as position to exit\n";
    do{
        cout<<"enter the element and the position : \n";
        cin>>data>>n;
        if(n!=0){
            insert(data,n);
        }
    }while(n!=0);
    print();

    return 0;
}
