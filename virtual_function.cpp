#include <iostream>
using namespace std;

class A{
    public:
        virtual void f1(){ // For late binding

        }
};
class B: public A{
    public:
        void f1(){ // Method overriding
            
        }
};
int main(){
    A *p, o1;
    B o2;
    p = &o2;
    p->f1(); // B
    o2.f1(); // B
}