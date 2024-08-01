#include<iostream>
#include<cstring>
#include<cstdarg>

using namespace std;

typedef enum {
    integer, character, list
} t;


template<class tname>
class let{
    int i;
    char *c;

    tname *arr;

    t datatype;
    
    public:
        let(int a){
            i = a;
            datatype = integer;
        }

        let(tname a){
            int size = sizeof(a) / sizeof(a[0]);
            arr = new tname[size];
            for(int i=0; i<size){
                tname[i] = a[i];
            }
        };

        let(const char* a){
            int size = strlen(a);
            c = new char[size];
            strcpy(c, a);
            datatype = character;
        }

        ~let(){
            delete[] arr;
        }

        friend istream &operator>>(istream &, let &);
        friend ostream &operator<<(ostream &, let &);

};



ostream &operator<<(ostream &cout, let &c){
    if(c.datatype == integer){
        cout << (c.i);
    } else if(c.datatype == character){
        cout << c.c;
    } else if(c.datatype == list){
        int size = sizeof(c.arr) / sizeof(c.arr[0]);
        for(int i = 0; i < size; i++){
            cout << c.arr[i] << " ";
        }
    }
    return cout;
}

int main(){
    int a[] = {1, 2, 3};
    let k = a;

    cout << a;

    return 0;
}