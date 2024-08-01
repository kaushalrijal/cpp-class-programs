#include<fstream>

using namespace std;



// int main(){
//     ofstream outf("myfile.txt"); // Once a file has been opened we cannot associate outf with another file
//     /*
//     alternative method
//     ofstream outf;
//     outf.open("myfile.txt");    // A file can be closed and another file can be associated with the outf object
//     */

//    outf << "Object Oriented" << "programming" << 500;
// }

int main(){
    char str1[100], str2[100], str3[100];
    ifstream inf("myfile.txt");
    int pages;
    inf >> str1 >> str2 >> str3 >> pages;

}