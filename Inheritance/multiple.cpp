#include<iostream>

using namespace std;

class Student{
    int rn;
    char name[30], program[30];
    
    public:
        void getInfo(){
            cout << "Enter student roll no, name and program";
            cin >> rn >> name >> program;
        }

        void showInfo(){
            cout << "Roll No: " << rn << endl;
            cout << "Name: " << name << endl;
            cout << "Program: " << program << endl;
        }
};

class Exam : public Student{
    char sub[7][30];
    protected:
        int fm[7], om[7];

    public:
        void getInfo(){
            Student::getInfo();
            for(int i=0; i<7; i++)
                cin>>sub[i]>>fm[i]>>om[i];
        }

        void showInfo(){
            Student::showInfo;
            for(int i=0; i<7; i++){
                cin >> fm[i] >> om[i];
            }
        }
};

class Result : public Exam{
    float per;

    public:
        void calcPer(){
            int tfm=0, tom=0;
            for(int i=0; i<7; i++){
                tfm+=fm[i];
                tom+=om[i];
            }
            per = (tom/tfm) * 1000;
        }

        void showInfo(){
            Exam::showInfo();
            cout << per;
        }
};

int main(){
    Result r;
    r.Exam::getInfo();
    r.showInfo();
}