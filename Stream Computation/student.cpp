#include<iostream>
#include<fstream>
using namespace std;


class Student{
    char name[50];
    int rn;
    float per;

    public:
        void getData(){
            cin >> name >> rn >> per;
        }

        void showData(){
            cout << name << rn << per;
        }

        void writeFile(){
            getData();
            ofstream outf("Student.bin",ios::binary|ios::app);
            outf.write(reinterpret_cast<char*>(this),sizeof(*this));
        }

        void readFile(){
            ifstream inf("Student.bin", ios::binary);
            while(!inf.eof()){
                inf.read(reinterpret_cast<char *>(this), sizeof(*this));
                showData();
    }
        } 
};

int main(){
    int choice;
    Student s;
    while (true){
        cout << "1.Write to File \n2.read all record\n3.exit";
        cin>>choice;
        switch(choice)
        {
            case 1: s.writeFile();
            break;
            case 2: s.readFile();
            break;
            case 3: exit(0);
            break;
        }
    }
}