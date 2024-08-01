#include<iostream>

using namespace std;

class Time{
    int hr, min, sec;
    public:
        Time(int h, int m, int s): hr(h), min(m), sec(s){}
        Time(){};
        operator int(){
            return(hr*3600+min * 60 + sec);
        }

        void display(){
            cout << hr << ":" << min << ":" << sec;
        }
        
};

//cast operator function
/*operator return_type()
{
    function body
}
*/

int main(){
    Time T1(5, 50, 40);
    int total_sec = T1;
    cout << total_sec;
    return 0;
}