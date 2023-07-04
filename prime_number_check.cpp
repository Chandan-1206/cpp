// prime number check
#include <iostream>

using namespace std;

int main()
{
    int n,count=0;
    cout<<"enter a number to check if its a prime number: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        cout<<"it is a prime number\n";
    }
    else{
        cout<<"it is not a prime number\n";
    }

    return 0;
}
