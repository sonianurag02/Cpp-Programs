#include <iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }
        void showData(){
            cout<<"\na = "<<a<<", b = "<<b<<endl;
        }
        Complex operator +(Complex c){ //Overloading of binary operator
            Complex temp;
            temp.a = a+c.a;
            temp.b = b+c.b;
            return (temp);
        }
        Complex operator-(){ //Overloading of unary operator
            Complex temp;
            temp.a = -a;
            temp.b = -b;
            return (temp);
        }
};

class Integer{
    private:
        int x;
    public:
        void setData(int a){
            x = a;
        }
        void showData(){
            cout<<"\nx = "<<x;
        }
        Integer operator++(){ //pre-increment
            Integer i;
            i.x = ++x;
            return (i);
        }
        Integer operator++(int){ //post-increment
            Integer i;
            i.x = x++;
            return (i);
        }
};

int main(){
    Complex c1, c2, c3; // c1 is an object
    c1.setData(3,4);
    c2.setData(5,6);
    // c3 = c1.operator+(c2);
    c3 = c1 + c2;
    c2 = c1.operator-(); // or c2=-c1 //Overloading of unary operator 
    c3.showData();
    c2.showData();

    Integer i1, i2;
    i1.setData(3);
    i1.showData();
    // i2 = ++i1; // i2 = i1.operator++();
    // i1.showData();
    // i2.showData();
    i2 = i1++; // i2 = i1.operator++(int);
    i1.showData();
    i2.showData();
}
