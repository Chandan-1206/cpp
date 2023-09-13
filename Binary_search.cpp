// Binary search (used only for sorted array)
#include <iostream>

using namespace std;

// Binary search for array
void binary_search(int arr[],int n,int f){
    int s=0,e=n;
    while(s<=e){
        int mid=(e+s)/2;
        if(f==arr[mid]){
            cout<<f<<" is at index : "<<mid<<endl;
        }
        else if(f<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<"Not found!!!\n";
}

// Binary search for array with reccursion
void binary_search_rec(int arr[],int s,int e,int f){
    int mid=(s+e)/2;
    if(s>e){
        cout<<"Not found!!!\n";
    }
    else if(f==arr[mid]){
        cout<<f<<" is at index : "<<mid<<endl;
    }
    else if(f<arr[mid]){
        binary_search_rec(arr,s,mid-1,f);
    }
    else{
        binary_search_rec(arr,mid+1,e,f);
    }
}

int main()
{   
    int n,find,num;
    cout<<"enter the number of terms : ";
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
    // binary_search(arr,n,find);
    binary_search_rec(arr,0,n,find);
    
    
    return 0;
}
