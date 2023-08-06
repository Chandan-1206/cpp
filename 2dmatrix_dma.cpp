// 2d array using dma
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter number row : ";
    cin>>r;
    cout<<"Enter number of column : ";
    cin>>c;
    int **p=new int*[r];
    for(int g=0;g<r;g++)
    {
        p[g]=new int[c];
    }
    for(int g=0;g<r;g++)
    {
        for(int t=0;t<c;t++)
        {
            cout<<"Enter "<<g<<" "<<t<<" : ";
            cin>>p[g][t];
        }
    }
    cout<<"MATRIX"<<endl;
    for(int g=0;g<r;g++)
    {
        for(int t=0;t<c;t++)
        {
            cout<<p[g][t]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
