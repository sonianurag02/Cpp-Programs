/* Overloading of insertion and extraction operators. */

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
    friend ostream& operator<<(ostream&, Complex);
    friend istream& operator>>(istream&, Complex&);
};
ostream& operator<<(ostream &dout, Complex C){
    cout<<"\na = "<<C.a<<", b = "<<C.b;
    return (dout);
}
istream& operator>>(istream &din, Complex &C){
    cin>>C.a>>C.b;
    return (din);
}
int main(){
    Complex c1;
    cout<<"Enter a complex number: "<<endl;
    cin>>c1; //cin.operator>>(c1);
    cout<<"You entered: "<<endl;
    cout<<c1; // operator<<(cout,c1);
}
