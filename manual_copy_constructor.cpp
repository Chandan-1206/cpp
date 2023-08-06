//manual copy constructor
#include <iostream>

using namespace std;

class example{
    int data;
    public:
    example(int a){
        data =a;
    }
    void display(){
        cout<<"data = "<<data<<endl;
    }
    //copy constructor
    example(example &obj){
        data=obj.data;
        cout<<"copy constructor called \n";
    }
};

int main()
{
    example obj1(69);
    example obj2=obj1;
    obj1.display();
    obj2.display();

    return 0;
}
