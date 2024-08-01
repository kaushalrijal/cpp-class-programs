#include<iostream>

#define num_shapes 3

using namespace std;

class Shape{
    string name;
    public:
        void getName(){
            cin >> name;
        }

        virtual void getDimensions() = 0;    // Pure virtual function

        virtual float area() = 0;
        
        Shape(){
            cout << "Base Constructor";
        }

        virtual ~Shape(){                   // Virtual Constructor
            cout << "Destructor of base";
        }
};

class Circle : public Shape {
    float r;
    public:
        void getDimensions(){
            getName();
            cin >> r;
        }

        float area(){
            return 3.141592 * r * r;
        }

        Circle(){
            cout << "Derived Constructor";
        }

        ~Circle(){
            cout << "Destructor of derived";
        }
};

class Rectangle : public Shape{
    float a, b;
    public:
        void getDimensions(){
            getName();
            cin >> a >> b;
        }

        float area(){
            return a * b;
        }

        Rectangle(){
            cout << "Derived Constructor";
        }

        ~Rectangle(){
            cout << "Destructor of derived";
        }
};

class Square : public Shape{
    float l;
    public:
        void getDimensions(){
            getName();
            cin >> l;
        }

        float area(){
            return l*l;
        }

        Square(){
            cout << "Derived Constructor";
        }

        ~Square(){
            cout << "Destructor of derived";
        }
};

int main(){
    Shape *sptr[num_shapes];
    sptr[0] = new Circle;
    sptr[1] = new Rectangle;
    sptr[2] = new Square;

    for(int i=0; i<num_shapes; i++)
        sptr[i]->getDimensions();

    for(int i=0; i<num_shapes; i++)
        sptr[i]->area();

    delete[] sptr;    

    return 0;

}