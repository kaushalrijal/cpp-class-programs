#include<iostream>

using namespace std;

class B;

class A{
    int a;
    public:
        void getNum(){
            cin >> a;
        }

        void show(){
            cout << a << endl;
        }

        friend void swap(A &, B &);
};

class B{
    int b;
    public:
        void getNum(){
            cin >> b;
        }

        void show(){
            cout << b << endl;
        }

        friend void swap(A &, B &);
};

void swap(A &a, B &b){
    int temp = a.a;
    a.a = b.b;
    b.b = temp;
}

int main(){
    A aobj;
    B bobj;

    aobj.getNum();
    bobj.getNum();

    swap(aobj, bobj);

    aobj.show();
    bobj.show();
}