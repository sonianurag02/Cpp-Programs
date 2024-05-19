#include <iostream>
#include <map>
using namespace std;

int main(){
    map <int, string> customer;

    customer[100] = "Gajendra";
    customer[123] = "Dilip";
    customer[145] = "Aditya";
    customer[171] = "Shahid";
    customer[200] = "Rajesh";

    map <int,string> c{
        {100, "Gajendra"},
        {123, "Dilip"},
        {145, "Aditya"},
        {171, "Shahid"},
        {200, "Rajesh"} 
    };
    
    customer.insert(pair<int,string>(205,"Saurabh"));

    // cout<<customer[100]<<endl;
    // cout<<customer[123]<<endl;
    // cout<<customer[145]<<endl;

    map <int,string>::iterator p = customer.begin();

    while (p != customer.end())
    {
        cout<<p->first<<":"<<p->second<<endl;
        p++;
    }

    // cout<<customer.at(145)<<endl;
    // cout<<customer.size()<<endl;
    // cout<<customer.empty()<<endl;
}