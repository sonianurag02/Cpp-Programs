#include<iostream>
using namespace std;
inline void func();
int main(){
    cout<<"You are in main"<<endl;
    func();
}
void func(){
    cout<<"You are in function";
}