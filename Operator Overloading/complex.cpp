#include<iostream>

using namespace std;

class Complex{
    int rl, img;

    public:
        friend istream &operator>>(istream &, Complex &);
        friend ostream &operator<<(ostream &, Complex &);

};

istream &operator>>(istream &cin, Complex &c){
    cin >> c.rl >> c.img;
    return cin;
}

ostream &operator<<(ostream &cout, Complex &c){
    cout << c.rl << "+i" << c.img;
    return cout;
}


int main(){
    Complex c1;
    cin >> c1;
    cout << c1;
}