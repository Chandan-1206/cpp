//Radix sort

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

void radix_sort(int a[], int n) {
    int k = a[0];
    for (int i = 1; i < n; i++) {
            k=max(k,a[i]);
    }

    int t = 1;
    while (k/t>0) {
        count_sort(a, n);
        t *= 10;
    }
}

int main()
{
    int arr1[]= {151,31,456,589,9,43};
    radix_sort(arr1,6);
    cout<<"Array after sorting using count sort:"<<endl;
    for (int i=0; i<6; i++)
        cout<<arr1[i]<<'\t';
    cout<<endl;
    return 0;
}
