#include<iostream>
#include<cstring>

using namespace std;

class String{
    char *str;
    int len;

    public:
        String(char *s){
            len = strlen(s);
            str = new char[len + 1];
            strcpy(str, s);
        }
        String(){   }

        ~String(){
            delete[] str;
        }

        String operator+(String s2){
            String t;
            t.str = new char[len + s2.len + 1];
            strcpy(t.str, str);
            strcat(t.str, s2.str);
            return t;
        }

        void operator=(String t){
            str = new char[strlen(t.str)+1];
            strcpy(str, t.str);
        }

        void display(){
            cout << str;
        }
};

int main(){
    String s1("learning c++");
    String s2("operator overloading");
    String s3;
    s3 = s1 + s2;
    s3.display();
}