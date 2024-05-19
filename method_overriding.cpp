#include <iostream>
using namespace std;

class car{
    public:
        void shiftGear(){

        }
        void f2(){

        }
};
class sportsCar: public car{
    public:
        void shiftGear(){ // Method over-riding

        }
        void f2(int x){ // Method Hiding

        }
};
int main(){
    sportsCar obj;
    obj.shiftGear(); // sportsCar
    // obj.f2(); // error
    obj.f2(4); // B
}