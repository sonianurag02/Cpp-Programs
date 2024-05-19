#include <iostream>
using namespace std;

class Dummy{
    private:
        int a, b;
        int *p;
    public:
        Dummy(){
            p = new int;
        }
        void setData(int x, int y, int z){ // Deep Copy
            a = x;
            b = y;
            *p = z;
        }
        void showData(){
            cout<<"\n a = "<<a<<", b = "<<b<<endl;
        }
        Dummy(Dummy &d){ 
            a = d.a; // Shallow Copy
            b = d.b; // Shallow Copy
            p = new int;
            *p = *(d.p); //deep copy
        }
        ~Dummy(){
            delete p;
        }
};
int main(){
    Dummy d1;
    d1.setData(3,4, 5);
    Dummy d2 = d1;
    d2.showData();
}