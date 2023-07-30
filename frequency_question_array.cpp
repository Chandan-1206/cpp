// frequency of elements in an array
#include <iostream>

using namespace std;

int main()
{
    int n,check,index=0;
    cout<<"enter the no. of terms : ";
    cin>>n;
    float arr[n],arr2[n];
    cout<<"enter the numbers : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        check=0;
        for(int j=0;j<=index;j++){
            if(arr2[j]==arr[i]){
                check++;
            }
        }
        if(check==0){
            arr2[index]=arr[i];
            index++;
        }
    }
    for(int i=0;i<index;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr2[i]==arr[j]){
                count++;
            }
        }
        cout<<"frequency of "<<arr2[i]<<" is "<<count<<endl;
    }

    return 0;
}
