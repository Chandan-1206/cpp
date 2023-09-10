// Binary search (used only for sorted array)
#include <iostream>

using namespace std;

// Binary search for array
int binary_search(int arr[],int n,int f){
    int s=0,e=n;
    while(s<=e){
        int mid=(e+s)/2;
        if(f==arr[mid]){
            return mid;
        }
        else if(f<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

// Binary search for array with reccursion
int binary_search_rec(int arr[],int s,int e,int f){
    int mid=(s+e)/2;
    if(s>e){
        return -1;
    }
    else if(f==arr[mid]){
        return mid;
    }
    else if(f<arr[mid]){
        return binary_search_rec(arr,s,mid-1,f);
    }
    else{
        return binary_search_rec(arr,mid+1,e,f);
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
    // cout<<binary_search(arr,n,find)<<endl;
    cout<<binary_search_rec(arr,0,n,find)<<endl;
    
    
    return 0;
}
