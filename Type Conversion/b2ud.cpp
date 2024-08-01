#include<iostream>

using namespace std;

class Time{
    int hr, min, sec;
    public:
        Time(int h, int m, int s): hr(h), min(m), sec(s){}
        Time(int ts){
            hr = ts/3600;
            ts%=3600;
            min = ts/60;
            sec = ts%60;
        }
        Time(){};

        void display(){
            cout << hr << ":" << min << ":" << sec;
        }
        
};

int main(){
    Time T1;
    int total_sec;
    cin >> total_sec;
    T1 = total_sec;
    T1.display();
    return 0;
}