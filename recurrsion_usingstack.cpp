// basic recurrsion and stack implementation for recurrsion
#include <iostream>

using namespace std;

class stack{
    public:
    int *arr;
    int top=-1,s;
    stack(int x){
        s=x;
        arr=new int[s];
    }
    void push(int data){
        if(top<s){
            top++;
            *(arr+top)=data;
        }
    }
    void pop(){
        int y;
        y=*(arr+top);
        top--;
        cout<<y<<"\t";
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    
};

void natnum(int a,int n){
    cout<<a<<"\t";
    if(a!=n){
        natnum(a+1,n);
    }
}

int main()
{
    int n;
    cout<<"enter the number of terms : ";
    cin>>n;
    natnum(1,n);
    cout<<endl;
    stack s(n);
    for(int i=n;i>0;i--){
        s.push(i);
    }
    for(int i=n;i>0;i--){
        s.pop();
    }
    cout<<endl;
    
    return 0;
}
