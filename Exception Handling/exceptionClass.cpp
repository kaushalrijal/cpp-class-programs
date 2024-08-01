#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class Number
{
    float num;

public:
    void getInput()
    {
        cin >> num;
    }

    class Negative
    {
    public:
        float n;
        char msg[100];

        Negative(float r, char *m)
        {
            n = r;
            strcpy(msg, m);
        }
    };
    float squareRoot()
    {
        if (num < 0)
        {
            throw Negative(num, "We cannot calculate square root of negative number");
        }
        return sqrt(num);
    }
};

int main()
{
    Number N1;
    N1.getInput();
    try
    {
        cout << N1.squareRoot();
    }
    catch (Number::Negative Neg)
    {
        cout << Neg.n << Neg.msg;
    }
}