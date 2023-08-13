// delete nth node
#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

node *head=NULL;

void insertend(int x){
    node *temp=new node();
    temp->data=x;
    temp->next=NULL;
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
    cout<<"linked list : \n";
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

void delete_nth(int n){
    if(n <= 0) {
        cout << "Invalid position.\n";
        return;
    }
    if(n == 1){
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    
    node *left = head;
    for(int i = 0; i < n - 2 && left != NULL; i++){
        left = left->next;
    }
    
    if(left == NULL || left->next == NULL) {
        cout << "Position out of range.\n";
        return;
    }
    
    node *temp = left->next;
    left->next = temp->next;
    delete temp;
}



int main()
{
    int choice;
    do{
        cout<<"enter \n1)insert\n2)delete\n3)exit\n";
        cin>>choice;
        if(choice==1){
            int x;
            cout<<"enter data or -1 to exit : \n";
            do{
                cin>>x;
                if(x!=-1){
                    insertend(x);
                }
                print();
            }while(x!=-1);
        }
        else if(choice==2){
            int n = 0;
            cout << "enter position to delete or -1 to exit : \n";
            while (n != -1){
                cin >> n;
                if (n != -1) {
                    delete_nth(n);
                    print();
                }
            }
        }
        else{
            if(choice!=3){
                cout<<"invalid choice\n";
            }
        }
    }while(choice!=3);

    return 0;
}
