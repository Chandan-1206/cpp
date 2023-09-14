//BUCKET SORT

#include <iostream>
using namespace std;

class node
{
public:
    float data;
    node *next;
    node(float d)
    {
        data=d;
        next=NULL;
    }
};

void insertasc(node* &head,float x)
{
    node *temp=new node(x);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    if(head->data>=x)
    {
        temp->next=head;
        head=temp;
        return;
    }
    node *big=head;
    node *small=head;
    while(big!=NULL && x>big->data)
    {
        small=big;
        big=big->next;
    }
    temp->next=big;
    small->next=temp;
}

// bucket sort
void bucket_sort(float arr[], int n)
{
    node* bucket[10];
    node *temp;
    int x;
    for (int i=0; i<10; i++)
    {
        bucket[i] = NULL;
    }
    for (int i=0; i<n; i++)
    {
        x = (arr[i]*10);
        insertasc(bucket[x], arr[i]);
    }
    int i=0;
    while (i<n)
    {
        for (int j=0; j<10; j++)
        {
            if (bucket[j]!=NULL)
            {
                temp = bucket[j];
                while (temp!=NULL)
                {
                    arr[i] = temp->data;
                    temp=temp->next;
                    i++;
                }
            }
        }
    }
}


int main()
{
    float arr[] = {0.76, 0.35, 0.42, 0.68, 0.55, 0.73, 0.59, 0.25, 0.12, 0.01};
    bucket_sort(arr, 10);
    cout<<"Sorted array is:"<<endl;
    for (int i=0; i<10; i++)
    {
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
    return 0;
}
