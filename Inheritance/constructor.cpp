#include<iostream>

using namespace std;

class Base{
    int y;
    public:
        Base(){
            cout << "I am inside default constructor of base." << endl;
        }
        Base(int a){
            y=a;
            cout << "I am inside argumented constructor of base" << endl;

        }
};

class Derived : public Base{
    int x;
    public:
        Derived(int a, int b):Base(b){
            x=a;
            cout << "I am inside argumented constructor of derived" << endl;
        }   
        Derived(){
            cout << "I am inside default constructor of derived" << endl;
        }
};

int main(){
    Derived d(5, 2);
    return 0;
}

