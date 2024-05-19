#include <iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        // A(){
        //     cout<<"Constructor of A"<<endl;
        // }
        A(int k){
            a = k;
        }
        ~A(){
            cout<<"Destructor of A"<<endl;
        }
};
class B: public A{
    private:
        int b;
    public:
        B(int x, int y):A(x){ //B():A()
            b = y;
        }
        ~B(){
            cout<<"Destructor of B"<<endl;
        }
};
int main(){
    B obj(4,3);
}