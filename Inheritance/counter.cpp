#include<iostream>

using namespace std;

class Counter{
    protected:
        int count;

    public:
        Counter(){
            count = 0;
        }
        void operator++(){
            ++count;
        }
        void show(){
            cout << count;
        }
};

class IncDecCounter : public Counter {
    public:
        void operator--(){
            --count;
        }
};

int main(){
    IncDecCounter c1;
    ++c1;
    ++c1;
    ++c1;
    c1.show();
    --c1;
    c1.show();

    return 0;
}