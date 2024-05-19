#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ofstream fout;
    // fout.open("myfile.dat",ios::app|ios::binary);

    // ifstream fin;
    // char ch;
    // fin.open("myfile.dat");
    // int pos;
    // pos = fin.tellg();
    // cout<<pos;
    // fin>>ch;
    // pos = fin.tellg();
    // cout<<pos;
    // fin>>ch;
    // pos = fin.tellg();
    // cout<<pos;

    ofstream fout;
    char ch;
    fout.open("myfile.dat",ios::app);
    int pos;
    pos = fout.tellp();
    cout<<pos;
    fout<<"Books";
    pos = fout.tellp();
    cout<<pos;
    fout.close();
}