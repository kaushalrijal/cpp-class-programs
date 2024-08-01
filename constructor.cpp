#include<iostream>

using namespace std;

class Complex{
    int real;
    int img;
    
    public:
        Complex(int r=0, int i=0){  //argumented or parametric constructor
            real = r;
            img = i;
        }
        /*Complex(){  //default or no argument constructor

        }*/

       // Copy Constructor
        Complex(Complex &c){
            real  = c.real;
            img = c.img;
        }

        Complex add (Complex c){
            Complex t;
            t.real = real + c.real;
            t.img = img + c.img;
            return t;
        }

        ~Complex(){
            cout << "Example of destructor" << endl;
        }

        void show(){
            cout << real << "+i" << img << endl;
        }

};


int main(){
    Complex c1(5, 3);
    Complex c2(4, 6);
    Complex c3;
    c3 = c1.add(c2);
    Complex c4(c3);

    c1.show();
    c2.show();
    c3.show();
    c4.show();

    return 0;
}