// circular linked list-insertionat end by rear pointer
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
node *rear=NULL;

void insertend(int x){
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

void print(){
    node *temp=rear->next;
    while(temp!=rear){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}


int main()
{
    int x;
    for(int i=0;i<6;i++){
        x=rand()%10;
        insertend(x);
    }
    print();


    return 0;
}
