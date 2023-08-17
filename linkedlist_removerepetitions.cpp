// removing repetitions from linked list
#include <iostream>
#include <ctime>
#include <cstdlib>

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
node *head=NULL;

void insertend(int x){
    node *temp=new node(x);
    if(head==NULL){
        head=temp;
    }
    else{
        node *left=head;
        while(left->next!=NULL){
            left=left->next;
        }
        left->next=temp;
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

void remrep() {
    node *temp2 = head;
    
    while (temp2 != NULL) {
        node *temp = temp2;
        node *prev = NULL;
        
        while (temp != NULL) {
            if (temp->data == temp2->data && temp != temp2) {
                if (prev != NULL) {
                    prev->next = temp->next;
                    delete temp;
                    temp = prev->next;
                } 
                else {
                    head = temp->next;
                    delete temp;
                    temp = head;
                }
            } 
            else {
                prev = temp;
                temp = temp->next;
            }
        }
        
        temp2 = temp2->next;
    }
}



int main()
{
    srand(time(0));
    int x;
    for(int i=0;i<6;i++){
        x=rand()%10;
        insertend(x);
    }
    print();
    remrep();
    print();


    return 0;
}
