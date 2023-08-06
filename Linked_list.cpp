// Linked list
#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};
node *start=NULL;

node* createnode(){
    node *temp=new node;
    return temp;
}

void insertnode(){
    node *temp,*traverse;
    int n;
    cout<<"Enter -1 to end"<<endl;
    cout<<"Enter the value to be added in the list"<<endl;
    while(n!=-1){
        cin>>n;
        temp=createnode();
        temp->data=n;
        temp->next=NULL;
        if(start==NULL){
            start=temp;
        }
        else{
            traverse=start;
            while(traverse->next!=NULL){
                traverse=traverse->next;
            }
            traverse->next=temp;
        }
    }
}

void print(){
    node *traverse=start;
    while(traverse->next!=NULL){
        cout<<traverse->data<<"\t";
        traverse=traverse->next;
    }
    cout<<endl;
}

int main()
{
    int opt;
    do{
        cout<<"_____________________Menu____________________\n";
        cout<<"1)create list\n2)print list\n3)exit\n";
        cin>>opt;
        
        if(opt==1){
            insertnode();
        }
         else if(opt==2){
            print();
        }
    }while(opt!=3);

    return 0;
}
