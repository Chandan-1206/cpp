// to check for armstrong number
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter a number to check if its an armstrong number : ";
    cin>>a;
    b=a;
    int rev=0;
    while(a!=0){
        int l= a%10;
        int c=l*l*l;
        rev=rev + c;
        a=a/10;
    }
    if(rev==b){
        cout<<b<<" is an armstrong number\n";
    }
    else{
        cout<<b<<" is not an armstrong number\n";
    }
    return 0;
}
