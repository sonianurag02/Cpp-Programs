#include <iostream>
using namespace std;

class B;
class A{
    private:
        int a;
    public:
        void setData(int x){
            a = x;
        }
        friend void fun(A, B);
};
class B{
    private:
        int b;
    public:
        void setData(int y){
            b = y;
        }
        friend void fun(A, B);
};
void fun(A o1, B o2){
    cout<<"Sum is "<< o1.a + o2.b <<endl;
}
int main(){
    A obj1;
    B obj2;
    obj1.setData(3);
    obj2.setData(2);
    fun(obj1, obj2);
}