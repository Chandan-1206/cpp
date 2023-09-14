//QUICK SORT IN ARRAY

#include <iostream>
using namespace std;

int part_high(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;
    int j=low;
    int temp;
    while(j<high)
    {
        if(a[j]<=pivot)
        {
            i++;
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;

        }
        j++;
    }
    i++;
    temp = a[i];
    a[i] = pivot;
    a[j] = temp;
    return i;
}

int part_low(int a[],int low,int high)
{
    int pivot=a[low];
    int i=high+1;
    int j=high;
    int temp;
    while(j>low)
    {
        if(a[j]>=pivot)
        {
            i--;
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;

        }
        j--;
    }
    i--;
    temp = a[i];
    a[i] = pivot;
    a[j] = temp;
    return i;
}

void QuickSort(int a[],int l,int r)
{
    if(l<r)
    {
        int q=part_low(a,l,r);
        QuickSort(a,l,q-1);
        QuickSort(a,q+1,r);
    }
}
int main()
{
    int arr1[]= {7, 58, 78, 45, 12, 45, 51, 36, 4, 55};
    QuickSort(arr1, 0, 9);
    cout<<"Array after sorting using Quick sort:"<<endl;
    for (int i=0; i<10; i++)
        cout<<arr1[i]<<'\t';
    cout<<endl;
    return 0;
}
