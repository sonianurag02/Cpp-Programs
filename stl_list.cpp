#include <iostream>
#include<list>
using namespace std;

int main(){
    list <int> l1 {55,22,77,44,66,99,88,11};
    // list <string> l2 {"India","Kathmandu","Islamabad","Dhaka"};

    list <int>::iterator p1 = l1.begin();

    while (p1 != l1.end())
    {
        cout<<*p1<<endl;
        p1++;
    }
    
    cout<<"Total values in the list are "<<l1.size()<<endl;

    // l1.pop_back();
    // l1.pop_front();
    // l1.sort();
    // l1.reverse();
    // l1.remove(44);
    l1.clear();
    
    list <int>::iterator q = l1.begin();

    while (q != l1.end())
    {
        cout<<*q<<endl;
        q++;
    }
    
    cout<<"Total values in the list are "<<l1.size()<<endl;

    // l2.push_back("Bhopal");
    // l2.push_front("Karachi");

    // list <string>::iterator p2 = l2.begin();

    // while (p2 != l2.end())
    // {
    //     cout<<*p2<<endl;
    //     p2++;
    // }
    
    // cout<<"Total values in the list are "<<l2.size()<<endl;
}