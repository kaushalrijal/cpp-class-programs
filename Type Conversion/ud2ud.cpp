#include<iostream>
#include<cmath>

using namespace std;

class polar;

class cartesian{
    int xco, yco;

    public:
        cartesian(int x, int y){
            xco = x;
            yco = y;
        }
        cartesian(){}
        
        // cartesian(polar p){
        //     float r = p.getRad();
        //     float a = p.getAng();
        //     xco = r*cos(a);
        //     yco = r*sin(a);
        // }
};

class polar{
    float rad, ang;

    public:
        polar(float r, float a){
            rad = r;
            ang = 3.141591 * a / 180;
        }
        float getRad(){
            return (rad);
        }
        float getAng(){
            return ang;
        }

        operator cartesian(){
            int x = rad*cos(ang);
            int y = rad*sin(ang);
            return cartesian(x, y);
        }
};

int main(){
    polar p(25, 45);
    cartesian c;

    c = p;
}