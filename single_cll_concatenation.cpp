// circular linked list-concatenation
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

void join(node* &r1,node* &r2){
    node* temp=r2->next;
    r2->next=r1->next;
    r1->next=temp;
}

void print(node* &rear){
    node *temp=rear->next;
    while(temp!=rear){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    node *r1,*r2;
    int x,y;
    for(int i=0;i<6;i++){
        x=rand()%10;
        insertend(x,r1);
    }
    for(int i=0;i<6;i++){
        y=rand()%10;
        insertend(y,r2);
    }
    cout<<"first cll : \n";
    print(r1);
    cout<<"second cll : \n";
    print(r2);
    cout<<"concatenated cll : \n";
    join(r1,r2);
    print(r2);
    
    return 0;
}
