#include <iostream>
using namespace std;

class student{
    public:
    string name;
};
int main(){
    student *ptr = new student;  /* here we are crating a dynamic memory for object ptr, so we this way, but we have to give parameters
                                    to the object then instead of student *ptr = new student; we write student *ptr = new student();
                                  and we give in the arguments in the parenthesis.
                                  . here we are craeating a dynamic memory for a student type(class), this means ptr can hold the address
                                  of a student type. here the student class has a string as a member variable. hence the *ptr can hold the
                                 address of a string in dynamic memory* so basically what we have done is we have created dynamic memory
                                  for the object ptr*/
                                              
    ptr->name = "Peter Parker";      /*becuase ptr is a object to refer to its memeber variable we use this syntax, as ptr is also 
                                       a pointer, hence to access name from the student class we write ptr-> name = "Peter Parker"*/
    cout << "Name : " << ptr->name;
    delete ptr; 
    
    
    
    
    return 0;
}