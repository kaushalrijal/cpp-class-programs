#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream fobj("myfile.bin", ios::out|ios::binary);
    char name[100];
    int age;
    float sal;
    cout << "Enter name, age and salary: ";
    cin >> name >> age >> sal;
    fobj.write(name, sizeof(name));
    fobj.write(reinterpret_cast<char *>(&age), sizeof(age));
    fobj.write(reinterpret_cast<char *>(&sal), sizeof(sal));
    
}