// Multi linked list(matrix by ll)
#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
    node *down;
    node(int x){
        data=x;
        next=NULL;
        down=NULL;
    }
};

node *head=NULL;

void insert(int col){
    int d;
    if(head==NULL){
        cout<<"enter data : ";
        cin>>d;
        node *temp=new node(d);
        head=temp;
        node *t1=head;
        for(int i=0;i<col-1;i++){
            cout<<"enter data : ";
            cin>>d;
            node *temp=new node(d);
            t1->next=temp;
            t1=t1->next;
        }
        return;
    }
    node *t2=head;
    while(t2->down!=NULL){
        t2=t2->down;
    }
    cout<<"enter data : ";
    cin>>d;
    node *temp=new node(d);
    t2->down=temp;
    node *t1=temp;
    for(int i=0;i<col-1;i++){
        cout<<"enter data : ";
        cin>>d;
        node *temp=new node(d);
        t1->next=temp;
        t1=t1->next;
        t2=t2->next;
        t2->down=temp;
    }
}

void print(){
    node *t1=head,*t2=head;
    while(t2!=NULL){
        while(t1!=NULL){
            cout<<t1->data<<"\t";
            t1=t1->next;
        }
        cout<<endl;
        t2=t2->down;
        t1=t2;
    }
    cout<<endl;
}

int main()
{
    int col;
    char n;
    
    cout<<"enter the number of coloumns : ";
    cin>>col;
    cout<<"enter 'y' to enter new row and 'n' to end : \n";
    cin>>n;
    while(n!='n'){
        insert(col);
        cout<<"enter 'y' to enter new row and 'n' to end : \n";
        cin>>n;
    }
    cout<<"MULTI linked list : \n";
    print();

    return 0;
}
