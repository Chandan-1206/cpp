//stack data structure(like manual vector)
#include <iostream>

using namespace std;

int arr[5];
int top=-1;

void insert(){
    int num;
    cout<<"enter the number to be inserted : ";
    cin>>num;
    if(top==-1){
        top++;
        arr[top]=num;
    }
    else if(top==4){
        cout<<"stack is full\n";
    }
    else{
        ++top;
        arr[top]=num;
    }
}
void del(){
    if(top==-1){
        cout<<"stack is empty\n";
    }
    else{
        top--;
    }
}
void display(){
    cout<<"\n\n display :\n";
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    do{
        cout<<"select \n 1)insert \n 2)delete \n 3)display \n 4)exit\n";
        cin>>n;
        if(n==1){
            insert();
        }
        else if(n==2){
            del();
        }
        else if(n==3){
            display();
        }
    }while(n!=4);
    return 0;
}
