// Merge sort 

#include <iostream>
using namespace std;
void mergesort(int arr [],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    int arr1[e-s+1];
    int i=s,j=mid+1,k=0;
    while(i<=mid&&j<=e)
    {
        if(arr[i]<=arr[j])
        {
            arr1[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            arr1[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        arr1[k]=arr[i];
        i++;
        k++;
    }
    while(j<=e)
    {
        arr1[k]=arr[j];
        j++;
        k++;
    }
    int l=0;
    for(int i=s; i<=e; i++)
    {
        arr[i]=arr1[l];
        l++;
    }
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers:\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    mergesort(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}
