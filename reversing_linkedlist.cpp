// reversing a linked list
#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};
node *head=NULL;

void insert(int x){
        node *temp=new node();
        temp->data=x;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
        }
        else{
            node *move=head;
            while(move->next!=NULL){
                move=move->next;
            }
            move->next=temp;
        }
}
void print(){
    node *temp=head;
    cout<<"linked list :\n";
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

void reverse(){
    node *left,*right,*temp=head;
    left=NULL;
    while(temp!=NULL){
        right=temp->next;
        temp->next=left;
        left=temp;
        temp=right;
    }
    head=left;
}

int main()
{
    int n,x;
    cout<<"how many numbers ?\n";
    cin>>n;
    for(int i=0;i<n;i++){
        x=rand()%10;
        insert(x);
    }
    print();
    reverse();
    print();

    return 0;
}
