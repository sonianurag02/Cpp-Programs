#include <iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public: 
        Complex(int x, int y){ // Parameterized Constructor
            a = x;
            b = y;
        }
        Complex(int k){ // Parameterized Constructor
            a = k;
        }
        Complex(){ // Default Constructor
        }
        Complex(Complex &c){
            a = c.a;
            b = c.b;
        }
};

int main(){
    // Complex c1;
    Complex c1(3, 4), c2(5), c3, c4(5,6);
    Complex c5(c1);
}