// fibonacci series  
#include <iostream>

using namespace std;

void fib(int n){
    long int a=0,b=1;
    long int next;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }
}

int main()
{
    int n;
    cout<<"enter the index to get fibonacci series till it : "; 
    cin>>n;
    fib(n);
    
    return 0;
}
