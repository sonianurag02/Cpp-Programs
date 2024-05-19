#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ifstream fin;
    // fin.open("myfile.dat");
    // cout<<fin.tellg();
    // cout<<"\n"<<(char)fin.get();
    // cout<<(char)fin.get();
    // cout<<"\n"<<fin.tellg();
    // fin.seekg(6);
    // cout<<"\n"<<fin.tellg(); 
    // cout<<"\n"<<(char)fin.get();
    // cout<<"\n"<<fin.tellg(); 
    // fin.seekg(2, ios_base::cur);
    // cout<<"\n"<<fin.tellg(); 
    // fin.seekg(2, ios_base::beg);
    // cout<<"\n"<<fin.tellg(); 
    // fin.seekg(-2, ios_base::end);
    // cout<<"\n"<<fin.tellg(); 
    // cout<<"\n"<<(char)fin.get();

    ofstream fout;
    fout.open("myfile.dat", ios::ate|ios::app);
    cout<<fout.tellp()<<endl;
    fout.seekp(2, ios_base::beg);
    cout<<fout.tellp()<<endl;
    fout.close();
}