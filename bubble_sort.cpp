//bubble sorting
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"display\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    //sorting
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"sorted array : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    

    return 0;
}
