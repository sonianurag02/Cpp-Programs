#include <iostream>
using namespace std;

namespace MySpace{
    int a;
    int f1();
    class A{
        public:
            void fun1();
    };
}
int MySpace::f1(){
    // std::cout<<"Hello";
    cout<<"Hello f1"<<endl;
}
void MySpace::A::fun1(){
    cout<<"Hello fun1"<<endl;
}

using namespace MySpace;
int main(){
    // MySpace::a = 5;
    a = 5;
    f1();
    A obj;
    obj.fun1();
}