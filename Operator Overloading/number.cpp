#include<iostream>

using namespace std;

class Numbers{
    int a, b;
    public:
        Numbers(int x, int y){
            a = x;
            b = y;
        }


        Numbers operator-(){
            a = -a;
            b = -b;
            return *this;
        }

        void display(){
            cout << a << b;
        }
};

int main(){
    Numbers n1(2, -5);
    n1 = -n1;
    n1.display();
}