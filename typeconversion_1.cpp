/* Primitive type to Class type*/

#include <iostream>
using namespace std;

class Complex{
    private:
        int a, b;
    public:
        Complex(){} // Default Contructor
        Complex(int k){
            a = k;
            b = 0;
        }
        void setData(int x, int y){
            a = x; 
            b = y;
        }
        void showData(){
            cout<<"\na = "<<a<<", b = "<<b<<endl;
        }
};
int main(){
    Complex c1;
    int x = 5;
    c1 = x; // error
    c1.showData();
}