
#include<iostream>
#include<cmath>

using namespace std;

class mathError{};
class divideByZero : public mathError{};
class negativeError : public mathError{};

void unexpected_handler(){
    cout << "Unexpected error occured";
}

class mathProblems{
    float a, b;

    public:
        void getInput(){
            cin >> a >> b;
        }

        float divide() throw(divideByZero)
        {  if(b == 0){
                throw divideByZero();
            }
            return a/b;
        }

        float geoMean(){
            if(a*b < 0){
                throw negativeError();
            }
            return sqrt(a*b);
        }

};

int main(){
    mathProblems M1;
    // set_unexpected(unexpected_handler);
    // set_terminate(unexpected_handler);
    cout << "Enter two numbers: ";
    M1.getInput();
    try{
        M1.divide();
    }catch(divideByZero){
        cout << "Denominator is zero, divide not possible";
    }catch(negativeError){
        cout << "The product of the numbers is negative, geometric mean not possible";
    }

    return 0;
}