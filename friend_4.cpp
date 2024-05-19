/* Overloading of unary operator as a friend function. */

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;
public:
    void setData(int x, int y){
        a = x;
        b = y;
    }
    void showData(){
        cout<<"\na = "<<a<<", b = "<<b<<endl;
    }
    friend Complex operator-(Complex);
};
Complex operator-(Complex X){
    Complex temp;
    temp.a = -X.a;
    temp.b = -X.b;
    return (temp);
}
int main(){
    Complex c1, c2;
    c1.setData(3,4);
    c2=-c1; // c2 = operator-(c1);
    c1.showData();
    c2.showData();
}
