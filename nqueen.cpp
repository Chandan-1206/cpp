// N-queens problem 

#include <iostream>

using namespace std;

bool issafe(int** arr,int n,int x,int y){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1)
            return false;
    }
    int row=x,col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1)
            return false;
        row--;
        col--;
    }
    row=x,col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1)
            return false;
        row--;
        col++;
    }
    return true;
}

bool nqueen(int** arr,int n,int x){
    if(x>=n)
        return true;
    
    for(int col=0;col<n;col++){
        if(issafe(arr,n,x,col)){
            arr[x][col]=1;
            if(nqueen(arr,n,x+1))
                return true;
            arr[x][col]=0;
        }
    }
    return false;
}

int main()
{
    int n,**arr;
    cout<<"enter the value of n : ";
    cin>>n;
    arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n]{0};
    }
    if(nqueen(arr,n,0)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

    return 0;
}
