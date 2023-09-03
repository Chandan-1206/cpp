// prime factors by making stack 
#include <iostream>

using namespace std;

class stack{
    int *arr;
    int top=-1;
    public:
    stack(){
        arr=new int[5];
    }
    bool overflow(){
        if(top==4){
            cout<<"stack is full";
            return true;
        }
        return false;
    }
    bool underflow(){
        if(top==-1){
            // cout<<"stack is empty";
            return true;
        }
        return false;
    }
    void push(int x){
        if(overflow()){
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(underflow()){
            return;
        }
        top--;
    }
    int peek(){
        if(underflow()){
            return 0;
        }
        int y=arr[top];
        return y;
    }
    int size(){
        if(underflow()){
            return 0;
        }
        return top+1;
    }
};

void prime_factor(int x,stack &s){
    for(int i=2;i<=x;i++){
        if(x%i==0){
            int count=0;
            for(int j=2;j<=i;j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count==1){
                s.push(i);
            }
        }
    }
}

int main()
{
    stack s;
    int x;
    cout<<"enter a number : ";
    cin>>x;
    prime_factor(x,s);
    while(s.size()!=0){
        cout<<s.peek()<<"\t";
        s.pop();
    }
    cout<<endl;

    return 0;
}
