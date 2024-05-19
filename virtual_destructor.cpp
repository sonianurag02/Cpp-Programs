#include <iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        void f1(){

        }
        virtual ~A(){

        }
};
class B: public A{
    private:
        int b;
    public:
        void f2(){

        }
        ~B(){

        }
};
int fun();
int fun(){
    A *p = new B;
    p->f1();
    // p->f2(); // error - Early binding
    delete p;
}
int main(){

}