// reversing a number
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"enter a number to change it from decimal to binary : ";
    cin>>a;
    int rev=0;
    while(a!=0){
        int l= a%10;
        rev=rev*10 + l;
        a=a/10;
    }
    cout<<rev;
    return 0;
}
