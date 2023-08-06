// 3d array using dma
#include<iostream>
using namespace std;
int main()
{
    int r,c,k;
    cout<<"enter number of layer : ";
    cin>>k;
    cout<<"enter number row : ";
    cin>>r;
    cout<<"enter number of column : ";
    cin>>c;
    int ***p=new int**[k];
    for(int g=0;g<k;g++)
    {
        p[g]=new int*[r];
    }
    for(int g=0;g<k;g++)
    {
        for(int a=0;a<r;a++)
        {
            p[g][a]=new int[c];
        }
    }
    for(int g=0;g<k;g++)
    {
        for(int t=0;t<r;t++)
        {
            for(int d=0;d<c;d++)
            {
                cout<<"enter element "<<g<<" "<<t<<" "<<d<<" : ";
                cin>>p[g][t][d];
            }
        }
    }
    cout<<"---MATRIX ADDRESS---"<<endl;
    for(int g=0;g<k;g++)
    {
        for(int t=0;t<r;t++)
        {
            for(int d=0;d<c;d++)
            {
                cout<<"address of element "<<g<<" "<<t<<" "<<d<<" : ";
                cout<<p<<endl;
            }
        }
    }
    cout<<"---MATRIX---"<<endl;
    for(int g=0;g<k;g++)
    {
        for(int t=0;t<r;t++)
        {
            for(int d=0;d<c;d++)
            {
                cout<<p[g][t][d]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
