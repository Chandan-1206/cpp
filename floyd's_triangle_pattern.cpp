// floyd's triangle pattern 
#include <iostream>

using namespace std;

int main()
{
    int n,count=1;
    cout<<"enter the no. of rows : "; 
    cin>>n;
    for(int i=n;i>=0;i--){
        for(int j=i;j<n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}
