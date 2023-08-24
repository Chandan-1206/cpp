// palindrome check doubly linked list
#include <iostream>

using namespace std;

class node{
    public:
    char data;
    node *next;
    node *prev; 
    node(char x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

node *head=NULL;

void insert(char x){
    node *n=new node(x);
    if(head==NULL){
        head=n;
    }
    else{
        node *left=head;
        while(left->next!=NULL){
            left=left->next;
        }
        left->next=n;
        n->prev=left;
    }
}

void palindrome(){
    node *first=head;
    node *last=head;
    while(last->next!=NULL){
        last=last->next;
    }
    while(first!=NULL||last!=NULL){
        if(first->data!=last->data){
            cout<<"its NOT a palindrome\n";
            return;
        }
        first=first->next;
        last=last->prev;
    }
    cout<<"its a palindrome\n";
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
    char x;
    cout<<"enter characters in linked list : \n";
    while(x!='.'){
        cin>>x; 
        if(x!='.'){
            insert(x);
        }
    }

    print();
    palindrome();

    return 0;
}

