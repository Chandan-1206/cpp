//binary search
#include <iostream>

using namespace std;

int search(int arr[],int &beg,int &end,int n){
    int mid=(beg+end)/2;
    if(n==arr[mid]){
        cout<<"element found at position : "<<mid<<endl;
        return 0;
    }
    else{
        if(n<arr[mid]){
            end=mid - 1;
        }
        else{
            beg=mid + 1;
        }
    }
    search(arr,beg,end,n);
    
    return 0;
}
int main()
{
    int arr[10]={2,4,6,8,10,12,14,16,18,20};
    int beg=0,end=10,mid,n;
    
    cout<<"enter the number to be searched : ";
    cin>>n;
    search(arr,beg,end,n);
    
    return 0;
}
