// Linear search in array and linked list
#include <iostream>

using namespace std;

// Linear search for array
void linear_seach(int arr[],int n,int f){
    for(int i=0;i<n;i++){
        if(arr[i]==f){
            cout<<"index : "<<i<<endl;
            return;
        }
    }
    cout<<"not found!!!"<<endl;
}

// Linear search for array with reccursion
void linear_search_rec(int arr[],int s,int n,int f){
    if(s>n){
        cout<<"not found!!!"<<endl;
        return;
    }
    else if(f==arr[s]){
        cout<<"index : "<<s<<endl;
        return;
    }
    else{
        linear_search_rec(arr,s+1,n,f);
    }
}

class node{
public:
    int data;
    node *next;
    node(int d){
        data = d;
        next = NULL;
    }
};
node* head= NULL;
node *tail= NULL;

void insert_node(int d){
    node *temp = new node(d);
    if (head==NULL){
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail=temp;
    return;
}

void print(){
    node *temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

// Linear search for linked list
void linear_search_ll(int f){
    int c=0;
    node *temp=head;
    while(temp!=NULL){
        if(f==temp->data){
            cout<<"index : "<<c<<endl;
            return;
        }
        c++;
        temp=temp->next;
    }
    cout<<"not found!!!"<<endl;
}

// Linear search for linked list using recurrsion
void linear_search_ll_rec(node *s,int f,int count){
    if(s==NULL){
        cout<<"not found!!!"<<endl;
    }
    else if(s->data==f){
        cout<<"index : "<<count<<endl;
    }
    else{
        linear_search_ll_rec(s->next,f,count+1);
    }
}

int main()
{   
    int n,find,num;
    /*cout<<"enter the number of terms : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
    cout<<"enter the element to search : ";
    cin>>find;
    // cout<<linear_seach(arr,n,find)<<endl;
    // cout<<linear_search_rec(arr,0,n,find)<<endl;
    */
    cout<<"\t\t SEARCHING LINKED LIST"<<endl;
    cout<<"enter -1 to stop insertion\n";
    do{
        cout<<"Enter the elements : ";
        cin>>num;
        if(num!=-1)
        insert_node(num);
    }while(num!=-1);
    print();
    cout<<"Enter element to be searched: ";
    cin>>find;
    // linear_search_ll(find);
    linear_search_ll_rec(head,find,0);
    
    return 0;
}

