// inserting node at beginning in a linked list
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
        temp->next=head;
        head=temp;
}
void print(){
    node *temp=head;
    cout<<"linked list :\n";
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}
int main()
{
    int n,x;
    cout<<"how many numbers ?\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the number : ";
        cin>>x;
        insert(x);
    }
    print();

    return 0;
}
