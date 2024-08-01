#include<iostream>

using namespace std;

class A{
    int a;
    public:
        void getNum(){
            cin >> a;
        }

        friend class B;

        void show(B);
};

class B{
    int b;
    public:
        void getNum(){
            cin >> b;
        }

        friend class A;

        void show(A);
};

void A::show(B bobj){
    cout << bobj.b << endl;
};

void B::show(A aobj){
    cout << aobj.a << endl;
};


int main(){
    A aobj;
    B bobj;

    aobj.getNum();
    bobj.getNum();

    aobj.show(bobj);
    bobj.show(aobj);

    return 0;
}