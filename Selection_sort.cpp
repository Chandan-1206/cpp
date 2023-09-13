// Selection sort
#include <iostream>

using namespace std;

// selection sort in array
void selection_sort (int a[], int n){
    int index, temp;
    for (int i=0; i<n-1; i++){
        index=i;
        for (int j=i+1; j<n; j++){
            if (a[index] > a[j]){
                index=j;
            }
        }
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
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

// selection sort in linked list
void selection_sort_ll(){
    node *temp=head;
    while(temp!=NULL)
    {
        node* low=temp;
        node* r=temp->next;
        while(r!=NULL)
        {
            if(r->data < low->data)
            {
                low=r;      
            }
            r=r->next;
        }
        int t1=temp->data;
        temp->data=low->data;
        low->data=t1;
        temp=temp->next;
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
    selection_sort(a,n);
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
    selection_sort_ll();
    cout<<"After sorting:"<<endl;
    print();
    
}
