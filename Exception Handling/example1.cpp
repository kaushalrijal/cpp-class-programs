#include<iostream>

using namespace std;

void getInput(int &x){
    cin >> x;
    if(cin.fail()){
        throw false;
    }
}

float divide(int x, int y){
    if(y==0){
        throw y;
    }
    return static_cast<float>(x)/y;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    try{
    getInput(a);
    getInput(b);
    float c = divide(a, b);
    } catch(bool) {
        cout << "Appropriate value not given, INPUT FAILED";
    } catch(int n) {
        cout << "Value of denominator is " << n << ". We can't denominator by zero.";
    }
    return 0;
}
