// half pyramid pattern using numbers
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the no. of rows : ";
    cin>>n;
    for(int i=n;i>=0;i--){
        for(int j=i;j<n;j++){
            cout<<n-i<<" ";
        }
        cout<<endl;
    }

    return 0;
}
