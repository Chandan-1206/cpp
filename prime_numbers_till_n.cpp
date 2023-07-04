// prime numbers till n
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number till which you want to print prime numbers: ";
    cin>>n;
    for(int j=2;j<=n;j++){
        int count=0;
        for(int i=2;i<j;i++){
            if(j%i==0){
                count++;
            }
        }
        if(count==0){
            cout<<j<<"\t";
        }
    }
    
    return 0;
}
