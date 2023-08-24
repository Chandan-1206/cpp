// identical cll check
#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int x){
        data=x;
    }
};

void insert(node* &rear,int x){
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

void identical(node* &r1,node* &r2,int c1,int c2){
    if(c1!=c2){
        cout<<"linked lists are NOT identical\n";
        return;
    }
    else{
        node *temp1=r1->next;
        node *temp2=r2->next;
        while(temp1->data!=temp2->data){
            temp1=temp1->next;
        }
        for(int i=0;i<c1;i++){
            temp1=temp1->next;
            temp2=temp2->next;
            if(temp1->data!=temp2->data){
                cout<<"linked lists are NOT identical\n";
                return;
            }
        }
    }
    cout<<"linked lists are identical\n";
}

void print(node* &rear){
    node *temp=rear->next;
    do{
        cout<<temp->data<<"\t";
        temp=temp->next;
    }while(temp!=rear->next);
    cout<<endl;
}

int main()
{
    node *r1=NULL,*r2=NULL;
    int n1,n2,c1=0,c2=0;
    cout<<"enter data for first linked list , enter -1 to exit :\n";
    while(n1!=-1){
        cin>>n1;
        if(n1!=-1){
        insert(r1,n1);
        c1++;    
        }
    }
    print(r1);
    cout<<"enter data for second linked list , enter -1 to exit :\n";
    while(n2!=-1){
        cin>>n2;
        if(n2!=-1){
            insert(r2,n2);
            c2++;
        }
    }
    print(r2);
    identical(r1,r2,c1,c2);
    
    return 0;
}
