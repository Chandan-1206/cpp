// circular linked list-deletion by data
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

void deleete(int n){
    node *temp=rear->next;
    node *left=NULL;
    while(temp->data!=n){
        left=temp;
        temp=temp->next;
    }
    left->next=temp->next;
    delete temp;
}

void print(){
    node *temp=rear->next;
    while(temp!=rear){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    int x;
    for(int i=0;i<6;i++){
        x=rand()%10;
        insertend(x);
    }
    print();
    int n;
    cout<<"enter element to delete : ";
    cin>>n;
    deleete(n);
    print();

    return 0;
}
