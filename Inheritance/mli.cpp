#include<iostream>

using namespace std;

class Employee
{
    int id;
    string name;

protected:
    float sal;

public:
    void getData()
    {
        cin >> id >> name >> sal;
    }

    void showData()
    {
        cout << "Employee No.: " << id << endl;
        cout << "Name" << name << endl;
        cout << "Basic Salary: " << sal << endl;
    }

};

class Education{
    char qualif[30];

    public:
        void getData(){
            cin >> qualif;
        }

        void showData(){
            cout << qualif;
        }
};

class Teacher : public Employee, public Education {
    char subject[30];
    int nop;
    public:
        void getData(){
            Employee::getData();
            Education::getData();
            cin >> subject >> nop;
        }

        void showData(){
            Employee::showData();
            Education::showData();
            cout << subject << nop;
        }
};

int main(){
    Teacher t1;

    t1.getData();
    t1.showData();

    return 0;
}