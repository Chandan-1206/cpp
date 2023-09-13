//MEDIAN SEARCH (To found 'k'th smallest number)

#include <iostream>

using namespace std;

void median_search(int arr[],int l,int r,int k){
    if(k>ind||k==0){
        cout<<"Not found!!!\n";
        return;
    }
    while(l<r){
        int ind=r-l;
        int index=rand()%ind;
        int j=0,m=0,n=0;
        int s1[ind],s2[ind],s3[ind];
        for(int i=0;i<ind;i++){
            if(arr[i]<arr[index]){
                s1[j]=arr[i];
                j++;
            }
            else if(arr[i]==arr[index]){
                s2[m]=arr[i];
                m++;
            }
            else{
                s3[n]=arr[i];
                n++;
            }
        }
        
        if(j>=k){
            for(int i=0;i<j;i++){
                arr[i]=s1[i];
                r=j;
            }
        }
        else if((j+m)>=k){
            cout<<" Kth smallest number : "<<arr[index]<<endl;
            return;
        }
        else{
            for(int i=0;i<n;i++){
                arr[i]=s3[i];
                r=n;
                k=k-(j+m);
            }
        }
    }
}

void median_search_rec(int arr[],int l,int r,int k){
    int ind=r-l;
    if(k>ind||k==0){
        cout<<"Not found!!!\n";
    }
    int index=rand()%ind;
    int s1[ind],s2[ind],s3[ind];
    int j=0,m=0,n=0;
    
    for(int i=0;i<ind;i++){
        if(arr[i]<arr[index]){
            s1[j]=arr[i];
            j++;
        }
        else if(arr[i]==arr[index]){
            s2[m]=arr[i];
            m++;
        }
        else{
            s3[n]=arr[i];
            n++;
        }
    }
    if(j>=k){
        median_search_rec(s1,0,j,k);
    }
    else if((j+m)>=k){
        cout<<" Kth smallest number : "<<arr[index]<<endl;
    }
    else{
        median_search_rec(s3,0,n,k-(j+m));
    }
}

int main()
{
    int n, key;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers: "<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter K for 'k'th smallest element: ";
    cin>>key;
    cout<<"\t Searching Using Median Search"<<endl;
    median_search(arr,0,n,key);
    // median_search_rec(arr,0,n,key);
    
    return 0;
}
