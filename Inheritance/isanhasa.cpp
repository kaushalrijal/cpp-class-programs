#include<iostream>

using namespace std;

class Address{
    int ward;
    char city[30], district[30];

    public:
        void getAdd(){
            cin >> city >> ward >> district;
        }
};

class Employee{
    int id;
    char name[30];
    float sal;
    Address aobj;

    public:
        void getInfo(){
            cin>>id>>name>>sal;
            aobj.getAdd();
        }
};


int main(){
    
    return 0;
}