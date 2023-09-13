// Bubble sort
#include <iostream>

using namespace std;

// bubble sort in array
void bubble_sort(int a[],int n){
    int temp;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"sorted array : \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}

class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

node *head=NULL;

void insert_node(int x){
    node* n=new node(x);
    node* temp=head;
    if(head==NULL)
    {
        head=n;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void print(){
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<'\t';
        temp=temp->next;
    }
    cout<<endl;
}

// bubble sort for linked list 
void bubble_sort_ll(){
    node *temp1=head;
    node* temp=head;
    while(temp1!=NULL)
    {
            while(temp->next!=NULL)
            {
                if((temp->next->data)<(temp->data))
                {
                    int t1=temp->data;
                    temp->data=temp->next->data;
                    temp->next->data=t1;
                }
                temp=temp->next;
            }
        temp = head;
        temp1=temp1->next;
    }
}


int main()
{
    int n,num;
    /*
    cout<<"enter no. of terms : ";
    cin>>n;
    int a[n];
    cout<<"enter elements : \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"display : \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    bubble_sort(a,n);
    */
    
    cout<<"\t\t Sorting LINKED LIST"<<endl;
    cout<<"enter -1 to stop insertion\n";
    do{
        cout<<"Enter the elements : ";
        cin>>num;
        if(num!=-1)
        insert_node(num);
    }while(num!=-1);
    cout<<"Before sorting:"<<endl;
    print();
    bubble_sort_ll();
    cout<<"After sorting:"<<endl;
    print();

}
