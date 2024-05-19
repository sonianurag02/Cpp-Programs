#include <fstream>
#include <iostream>
using namespace std;

int main(){
    // ofstream fout;
    // fout.open("myfile.dat");
    // fout<<"hello";
    // fout.close();

    ifstream fin;
    char ch;
    fin.open("myfile.dat");
    ch = fin.get();
    while (!fin.eof())
    {
        cout<<ch;
        ch = fin.get();
    }
    fin.close();
}