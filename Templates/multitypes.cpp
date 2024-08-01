#include<iostream>

template <class T1, class T2>
void display(T1 a, T2 b){
    std::cout << a << b;
}

int main(){
    int i1;
    float f1;
    std::cin >> i1 >> f1;
    display<int, float>(i1, f1);

    return 0;
}