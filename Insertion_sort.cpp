// Insertion sort
#include <iostream>

using namespace std;

// insertion sort in array
void insertion_sort (int a[], int n){
    int temp,j;
    for(int i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(a[j]>temp&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    
    cout<<"sorted array : \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}

/*
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
node *sorted=NULL;

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
*/

int main()
{
    int n,num;
    
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
    insertion_sort(a,n);
    
    /*
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
    insertion_sort_ll();
    cout<<"After sorting:"<<endl;
    print();
    */
}
