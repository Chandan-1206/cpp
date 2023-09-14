//RADIX SORT

#include <iostream>
using namespace std;

void count_sort(int a[],int n, int place)
{
    int k=(a[0]/place)%10;
    for(int i=0; i<n; i++)
    {
        if (k<(a[i]/place)%10)
            k=(a[i]/place)%10;
    }
    int count_arr[k+1]= {0};
    for(int i=0; i<n; i++)
    {
        count_arr[(a[i]/place)%10]++;
    }
    for(int i=1; i<=k; i++)
    {
        count_arr[i]+=count_arr[i-1];
    }
    int res[n];
    for(int i=n-1; i>=0; i--)
    {
        res[--count_arr[(a[i]/place)%10]]=a[i];
    }
    for(int i=0; i<n; i++)
    {
        a[i]=res[i];
    }
}

void radix_sort(int a[], int n)
{
    int k = a[0];
    for (int i = 1; i < n; i++)
    {
        if (k<a[i])
            k=a[i];
    }
    int t = 1;
    while (k/t>0)
    {
        count_sort(a, n, t);
        t *= 10;
    }
}

int main()
{
    int arr1[]= {151,31,456,589,9,43};
    radix_sort(arr1,6);
    cout<<"Array after sorting using count sort:"<<endl;
    for (int i=0; i<6; i++)
        cout<<arr1[i]<<'\t';
    cout<<endl;
    return 0;
}
