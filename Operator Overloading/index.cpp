// Overload index operator

#include<iostream>

#define SIZE 10

using namespace std;

class Array{
    int a[SIZE];

    public:
        int &operator[](int i){
            return a[i];
        }
        
};

int main(){
    Array A;
    for(int i = 0; i, SIZE; i++){
        cin >> A[i];
    }
    for (int i=0; i<SIZE; i++){
        cout << A[i];
    }
}