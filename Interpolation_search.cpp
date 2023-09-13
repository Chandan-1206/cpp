// Interpolation search (for sorted array with almost uniform intervals)
#include <iostream>

using namespace std;

// interpolation search for array
void interpolation_search(int arr[],int n,int f){
    int s=0,e=n-1;
    while(s<=e){
        int pos = s + ((f - arr[s]) * (e - s)) / (arr[e] - arr[s]);

        if(f==arr[pos]){
            cout<<f<<" is at index : "<<pos<<endl;
        }
        else if(f<arr[pos]){
            e=pos-1;
        }
        else{
            s=pos+1;
        }
    }
    cout<<"Not found!!!\n";
}

// interpolation search for array with reccursion
void interpolation_search_rec(int arr[],int s,int e,int f){
    int pos = s + ((f - arr[s]) * (e - s)) / (arr[e] - arr[s]);

    if(s>e){
        cout<<"Not found!!!\n";
    }
    else if(f==arr[pos]){
        cout<<f<<" is at index : "<<pos<<endl;
    }
    else if(f<arr[pos]){
        interpolation_search_rec(arr,s,pos-1,f);
    }
    else{
        interpolation_search_rec(arr,pos+1,e,f);
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
    // interpolation_search(arr,n,find);
    interpolation_search_rec(arr,0,n,find);
    
    
    
    return 0;
}
