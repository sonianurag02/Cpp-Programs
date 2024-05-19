#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    // string s1;
    // char str[] = "hello";
    // string s2 = str;
    // string s3 = s2;

    // s1 = "Hello";
    // string s2 = " Students";
    // string s3;
    // s3 = s1+s2;
    // s1 += s2;
    // if(s1 == s2){}
    // cout<<s1<<endl<<s2<<endl<<s3<<endl;

    // cout<<"Enter your name"<<endl;
    // string s4;
    // cin>>s4;
    // cout<<"Hello, "<<s4<<endl;

    // string s1 = "Hello";
    // char str[] = " Students";
    // string s2;
    // s2 = s1 + str;
    // cout<<s2;

    string s1;
    s1.assign("Hello");
    cout<<s1<<endl;
    s1.append(" Students");
    cout<<s1<<endl;
    s1.insert(2, "123");
    cout<<s1<<endl;
    s1.replace(2, 3, "A");
    cout<<s1<<endl;
    s1 = "Hello online online Students";
    cout<<s1<<endl;
    int i = s1.find("online");
    cout<<i<<endl;
    i = s1.rfind("online");
    cout<<i<<endl;
    // s1.erase();
    // cout<<s1<<endl;
    s1 = "Amar";
    string s2 = "Amit";
    i = s1.compare(s2); 
    cout<<i<<endl;

    s1 = "Hello";
    char str[20];
    strcpy(str, s1.c_str());
    cout<<str<<endl;
    
    i = s1.size();
    cout<<i<<endl;
} 