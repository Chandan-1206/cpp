//dynamic constructor
#include <iostream>

using namespace std;

class demo{
    int data,*p;
    public:
    //dynamic constructor
    demo(){
        p=new int;
    }
    /* This is not a dinamic constructor : 
    demo(){
        int *p;
        p=new int;
    }
    bcz we declared int *p in constructor not in class .*/
    void getdata(int a,int b){
        data=a;
        *p=b;
    }
    
    void display(){
        cout<<"data = "<<data<<"\t*p = "<<*p<<endl;
    }
};

int main()
{
    demo obj1;
    obj1.getdata(11,33);
    obj1.display();

    return 0;
}
