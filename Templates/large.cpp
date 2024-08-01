#include<iostream>
#include<cstring>

using namespace std;

class Time{
    int hr, min, sec;

    public:
        void getTime(){
            cin >> hr >> min >> sec;
        }

        void display(){
            cout << hr << ":" << min << ":" << sec; 
        }

        bool operator>(Time t){
            return((hr*3600 + min*60 + sec ) > (t.hr * 3600 + t.min * 60 + t.sec));
        }
};

template <class T>
T large (T a, T b){ // template function
    return a > b ? a : b;
}

char *large(char *a, char*b){ // overloading template function by non-template function
    if (strcmp(a, b) > 0)
        return a;
    return b;
}

int main(){
    int i1, i2;
    cin >> i1 >> i2;
    cout << large(i1, i2);

    float f1, f2;
    cin >> f1 >> f2;
    cout << large(f1, f2);

    char c1, c2;
    cin >> c1 >> c2;
    cout << large(c1, c2);

    Time t1, t2;
    t1.getTime();
    t2.getTime();

    Time t = large(t1, t2);
    t.display();

    return 0;
}