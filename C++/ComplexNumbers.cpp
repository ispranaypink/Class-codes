#include <iostream>
using namespace std;

class ComplexNumbers {
    public:
    double real, imag;

    ComplexNumbers(double r, double i){
        this->real = r;
        this->imag = i;
    }
    ComplexNumbers add(ComplexNumbers n2){   /* what we are doing here is that we are declaring a function of ComplexNumbers type. 
                                              (ComplexNumbers here is a already defined class which has 'real' and 'imag') that means
                                              the return of this function would of ComplecNumbers type. that is whatever may be the return
                                             of this function it will have 'real' and 'imag' parts in it. so as we declared that the 
                                             return type of this function would by ComplexNumbers. now when we add this complexnumber(which
                                             is n1) with complexnumber n2. as you can see both of them are of type ComplexNumber hence
                                             both of them have class members 'real' and 'imag' */
        ComplexNumbers temp(0.0, 0.0);      /* now we make a empty variable(also an object in this case)
                                             of (ComplexNumbers type), to hold values of the additon of 
                                            above number. now that we have a variable of type ComplexNumber that means it has real and 
                                            imag .*/
        
        temp.real = this->real + n2.real;   /* so we are going to hold the real value of addition in temp*/
        temp.imag = this->imag + n2.imag; 
        return temp;                        /*now the temp.real holds real value of the complex number and and temp.imag holds the imag
                                             value of the complex number. so when we return temp we expect to get both real and imag value*/
    }                                       /* and now are method is complete(function), we can use this method to add any complex number 
                                             if they are of the type ComplexNumbers ( that is if they have real and imag in them)*/
};
int main(){
    ComplexNumbers n1(2.9, 4.5);             
    ComplexNumbers n2(3.2, 5.0);

    ComplexNumbers result = n1.add(n2);

    cout << "Sum = " << result.real << " + " << result.imag;
    return 0;
}