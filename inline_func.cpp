#include<iostream>
using namespace std;

inline void func(); // Function Declaration

int main(){
    cout<<"You are in main"<<endl;
    func(); // Function call
}
void func(){ // Function Definition
    cout<<"You are in function";
}