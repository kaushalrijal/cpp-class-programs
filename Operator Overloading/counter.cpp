#include<iostream>

using namespace std;

class counter{
    int count;

    public:
        counter(){
            count = 0;
        }
        counter(int c){
            count = c;
        }

        // pre increment
        counter operator++(){
            return counter(count++);
        }
        
        // post increment
        counter operator++(int){
            return counter(++count);
        }

        void display(){
            cout << count;
        }

        friend counter operator+(int, counter);
};

counter operator+(int i, counter c){
    return counter(c.count + i);
}

int main(){
    counter c1(5);
    counter c2 = c1++;

    c1.display();
    c2.display();
}