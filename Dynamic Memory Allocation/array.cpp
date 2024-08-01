#include<iostream>

using namespace std;

int main(){
    int *a;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    a = new int[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "The elements of the array are: ";
    for(int i = 0; i< n; i++){
        cout << a[i] << "\t";
    }
    delete[] a;
}