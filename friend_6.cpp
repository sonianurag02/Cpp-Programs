/* Member function of one class can become friend to another class. */

#include <iostream>
using namespace std;

class A{
    public:
        void fun(){
            // ...
        }
        void foo(){
            // ...
        }
};
class B{
    friend class A; // To make all the functions friend of class B
    // friend void A::fun();
    // friend void A::foo();
};
void fun(){

}
int main(){
    
}
