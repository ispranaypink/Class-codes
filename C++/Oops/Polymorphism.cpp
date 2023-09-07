#include <iostream>
using namespace std;

class Base {
    public:
    virtual void print(){}   /* we have to use the keyword virtual in the base class, so that the derived class can overright us*/
};
class Derived : public Base{
    public:
    void print(){}
};
int main(){
    Derived d1;         /* here we have created a object d1*/
    Base *b1 = &d1;     /* here we have created a pointer of type base, which holds the address of object d1, of class derived.
                           as derived class is a subclass of base, now object *b1 can access member variables and member funcitons
                           of derived class aswell apparently this shit is a concept of "Polymorphism"*/
    b1->print();        /*whenever the object is a pointer, to access the members of the class we use "->" instead of a "."*/   
    return 0;
}