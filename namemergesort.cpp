//name sort by merge
#include <iostream>

using namespace std;

void namemerge(string arr[],int l,int r){
    if(l>=r)
        return;
    int mid=(l+r)/2;
    namemerge(arr,l,mid);
    namemerge(arr,mid+1,r);
    string arr1[r-l+1];
    int i=l,j=mid+1,k=0;
    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            arr1[k]=arr[i];
            i++;
            k++;
        }
        else{
            arr1[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        arr1[k]=arr[i];
        i++;
        k++;
    }
    while(j<=r){
        arr1[k]=arr[j];
        j++;
        k++;
    }
    int n=0;
    for(int m=l;m<=r;m++){
        arr[m]=arr1[n];
        n++;
    }
}

int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    string names[n];
    cout<<"enter names : \n";
    for(int i=0;i<n;i++)
        cin>>names[i];
    cout<<"names are : \n";
    for(int i=0;i<n;i++)
        cout<<names[i]<<"\t";
    cout<<endl;
    namemerge(names,0,n-1);

    cout<<"sorted names are : \n";
    for(int i=0;i<n;i++)
        cout<<names[i]<<"\n";
    cout<<endl;

    return 0;

}



