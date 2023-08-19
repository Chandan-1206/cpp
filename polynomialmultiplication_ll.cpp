// polynomial multiplication in a linked list
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class node {
public:
    int coef;
    int power;
    node *next;
    node (int x, int y)
    {
        coef = x;
        power = y;
        next = NULL;
    }
};

void insert (node * &head, int x, int y)
{
    node *temp = new node (x, y);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *left = head;
        while (left->next != NULL)
        {
            left = left->next;
        }
        left->next = temp;
    }
}

void print (node * &head)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->coef != 0)
        {
            if (temp->power != 0)
            {
                cout << temp->coef << "x^" << temp->power;
            }
            else
            {
                cout << temp->coef;
            }
            if (temp->next != NULL && temp->next->coef != 0)
            {
                cout << " + ";
            }
        }
        temp = temp->next;
    }
    cout << endl;
}

void multiply (node * &h1, node * &h2, node * &h3)
{
    node *temp1 = h1;
    while (temp1 != NULL)
    {
        node *temp2 = h2;
        int c, d;
        while (temp2 != NULL)
        {
            c = temp1->coef * temp2->coef;
            d = temp1->power + temp2->power;
            insert (h3, c, d);
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
}

void duplicate(node* &h3){
    node* temp1=h3;
    node* prev2=NULL;
    node* temp2=NULL;
    while(temp1!=NULL&&temp1->next!=NULL){
        temp2=temp1;

        while(temp2->next!=NULL){
            prev2=temp2;
            temp2=temp2->next;
            if(temp1->power==temp2->power){
                temp1->coef=temp1->coef+temp2->coef;
                prev2->next=temp2->next;
                delete temp2;
            }
        }
        temp1=temp1->next;
    }
    return;
}

int main ()
{
    srand (time (0));
    node *h1 = NULL;
    node *h2 = NULL;
    node *h3 = NULL;
    int x, y;
    for (int i = 0; i < 3; i++)
    {
        x = rand () % 10;
        y = 2 - i;
        insert (h1, x, y);
    }
    print (h1);
    int a, b;
    for (int i = 0; i < 3; i++)
    {
        a = rand () % 10;
        b = 2 - i;
        insert (h2, a, b);
    }
    print (h2);
    multiply (h1, h2, h3);
    print (h3);
    duplicate(h3);
    print(h3);

    return 0;
}
