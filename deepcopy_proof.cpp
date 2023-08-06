//proof of deep copy
#include <iostream>

using namespace std;

class demo{
    int data1,data2,*p;
    public:
    demo(){
        p=new int;
    }
    void getdata(int a,int b,int c){
        data1=a;
        data2=b;
        *p=c;
    }
    demo(demo &obj){
        data1 =obj.data1;
        data2 =obj.data2;
        p=new int; //this makes a copy of variable pointer pointing to (main resaon for deep copy).
        p=(obj.p);
        *p=50;// this shows there is a copy of variable pointer pointing to.
    }
    void display(){
        cout<<"data1 = "<<data1<<"\tdata2 = "<<data2<<"\t*p = "<<*p<<endl;
    }
};

int main()
{
    demo obj1;
    obj1.getdata(11,33,55);
    demo obj2=obj1;
    obj1.display();
    obj2.display();

    return 0;
}
