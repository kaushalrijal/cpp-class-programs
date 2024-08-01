#include<fstream>
#include<iostream>

using namespace std;

class Student{
    char name[100];
    int rn;
    float per;

    public:
        void getData(){
            cin >> name >> rn >> per;
        }

        void showData(){
            cout << name << rn << per;
        }
};

void writeFile(){
    Student s1;
    s1.getData();
    ofstream outf("student.dat", ios::binary|ios::app);
    outf.write(reinterpret_cast<char *>(&s1), sizeof(s1));
}

void readFile(){
    ifstream inf("student.dat", ios::binary);
    Student s;
    while(!inf.eof()){
        inf.read(reinterpret_cast<char *>(&s), sizeof(s));
        s.showData();
    }
}

int main(){
    int choice;
    while(true){
        cout << "1.Write to file\n2.Read from file\n3.Exit" << endl;
        cin >> choice;

        switch(choice){
            case 1:
                writeFile();
                break;
            case 2:
                readFile();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "Invalid Choice";
                break;
        }
    }
}
