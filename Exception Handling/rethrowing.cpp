#include<iostream>
#include<cmath>

class Number{
    float n;

    public:
        void getInput(){
            std::cin >> n;
        }

        class Negative{};

        float SquareRoot(){
            return sqrt(n);
        }

        float geoMean(Number n1, Number n2){
            n = n1.n * n2.n;
            try{
                return (*this).SquareRoot();
            } catch(Negative){
                std::cout << "Square root of negative number cannot be calculated.";
                throw;
            }
        }
};

int main(){
    Number n1, n2, n3;
    n1.getInput();
    n2.getInput();

    try{
        float result = n3.geoMean(n1, n2);
    } catch(Number::Negative){
        std::cout << "Geometric Mean of number cannot be calculated";
    }
}