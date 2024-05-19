#include <iostream>
using namespace std;

void fun(){
    throw 10;
}

int main(){
    int i = 3;
    cout<<"Welcome"<<endl;
    try{
        if (i == 3)
            fun();
            // throw;
        // if (i == 1)
        //     throw 1;
        // if (i == 2)
        //     throw "Hello";
        // if (i == 3)
        //     throw 3.5;
        cout<<"\nIn try";
    }
    // catch(double e){
    //     cout<<"\nException no. = "<<e;
    // }
    // catch(int e){
    //     cout<<"\nException no. = "<<e;
    // }
    // catch(...){
    //     cout<<"\nException no.";
    // }
    catch(int){
        cout<<"\nException no.";
    }
    cout<<"\nLast line";
}