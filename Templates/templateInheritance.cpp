#include<iostream>

using namespace std;

template<class T>
class Base{
    T a;
    public:
        Base(T m){
            a = m;
        }

        void display(){
            cout << a;
        }
};

class Derived : public Base<int>{
    float b;
    public:
        Derived(int m, float n) : Base<int>(m){
            b = n;
        }

        void display(){
            Base<int>::display();
            cout << b;
        }
};


// Base and derived of same template
template<class T>
class Derived : public Base<T>{
    T b;
    public:
        Derived(T m, T n) : Base<T>(m){
            b = n;
        }

        void display(){
            Base<T>::display();
            cout << b;
        }
};



int main(){
    Derived d1(5, 10.5);

}