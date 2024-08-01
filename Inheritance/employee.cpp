#include <iostream>

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

class Teacher : public Employee {
    char sub[30];
    int nop;
    
    public:
        void getData(){
            Employee::getData();
            cin >> sub >> nop;
        }

        void showData(){
            Employee::showData();
            cout << "Subject: " << sub << endl;
            cout << "Number of periods: " << nop << endl;
        }
};

class Doctor : public Employee {
    char spec[30];
    public:
        void getData(){
            Employee::getData();
            cin >> spec;
        }

        void showData(){
            Employee::showData();
            cout << "Specialization: " << spec << endl;
        }
};

class Labour : public Employee {

};


int main()
{
    Teacher t1;
    t1.getData();
    t1.showData();

    Doctor d1;
    d1.getData();
    d1.showData();

    Labour l1;
    l1.getData();
    l1.showData();

    return 0;
}