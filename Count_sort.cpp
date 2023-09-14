//Count sort

#include <iostream>
using namespace std;


void count_sort(int a[],int n){
    int k=a[0];
    for(int i=0;i<n;i++){
        k=max(k,a[i]);
    }
    
    int count[k+1]={0};
    
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    
    
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    
    int final[n];
    
    for(int i=n-1;i>=0;i--){
        final[--count[a[i]]]=a[i];
    }
    
    for(int i=0;i<n;i++){
        a[i]=final[i];
    }
}

int main()
{
    int arr1[]= {1,3,2,3,4,1,6,4,3};
    count_sort(arr1,9);
    cout<<"Array after sorting using count sort:"<<endl;
    for (int i=0; i<10; i++)
        cout<<arr1[i]<<'\t';
    cout<<endl;
    return 0;
}
