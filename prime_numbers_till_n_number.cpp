//prime numbers till n number
#include <iostream>

using namespace std;

int main()
{
  int i,m,n,count; 
  cout<<"enter the numbers till which you want to print prime numbers : ";
  cin>>n;
  for(m=2;m<=n;m++)
  {
    count=0;
    for (i=2;i<m;i++)
    {
  	    if(m%i==0)
  	    {
     	  count++;
	    }
    }
    if(count==0)
    {
	  cout<<m<<"\t";
    }  
  }
  return 0;
}
