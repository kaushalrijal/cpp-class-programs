#include<iostream>
#include<cstring>

#define s_size 15

class Stack{
    int data[s_size], top;

    public:
        Stack(){
            top = -1;
        }

        class Overflow{
            public:
                int t;
                char msg[100];

                Overflow(int x, char *m){
                    t = x;
                    strcpy(msg, m);
                }
        };

        class Underflow{
            public:
                int t;
                char msg[100];

                Underflow(int x, char *m){
                    t = x;
                    strcpy(msg, m);
                }
        };

        void push(int n){
            if(top ==s_size-1){
                throw Overflow(top, "Stack is full");
            }
            data[++top] = n;
        }
        int pop(){
            if(top<0){
                throw Underflow(top, "Stack is empty");
            }
            return(data[++top]);
        }
};

int main(){
    Stack s;
    try{
        s.push(10);
        s.push(20);
        std::cout << s.pop() << "s is popped";
    } catch (Stack::Overflow Ov){
        std::cout << "Top is " << Ov.t << Ov.msg;
    } catch (Stack::Underflow Un){
        std::cout << "Top is " << Un.t << Un.msg;
    }
}