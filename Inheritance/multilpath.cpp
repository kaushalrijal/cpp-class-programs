#include<iostream>

using namespace std;

class Student{
    int rn;
    char name[30];

    public:
        void getInfo(){
            cin >> rn >> name;
        }

        void showInfo(){
            cout << rn << name;
        }
};

class InternalExam : virtual public Student{
    protected:
        int fum[7], om[7];
    public:
        void getExamInfo(){
            for(int i = 0; i<7; i++){
                cin >> fum[i] >> om[i];
            }
        }

        void showExamInfo(){
            for(int i=0; i<7; i++){
                cout << fum[i] << om[i];
            }
        }
};

class FinalExam : virtual public Student{
    protected:
        int fum[7], om[7];
    public:
        void getExamInfo(){
            for(int i = 0; i<7; i++){
                cin >> fum[i] >> om[i];
            }
        }

        void showExamInfo(){
            for(int i=0; i<7; i++){
                cout << fum[i] << om[i];
            }
        }
};
class Result : public InternalExam, public FinalExam{
    float per;
    
    public:
        void calculate(){
            int tfm=0, tom=0;
            for(int i=0; i<7; i++){
                tfm+=InternalExam::fum[i] + FinalExam::fum[i];
                tom+=InternalExam::om[i] + FinalExam::om[i];
            }   
            per = tom/tfm * 100;
        }
};

int main(){
    Result R;
    R.getInfo();
    R.InternalExam::getExamInfo();
    R.FinalExam::getExamInfo();
    return 0;
}