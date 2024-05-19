#include <iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        ~Complex(){ // Destructor
            cout<<"Destructor";
        }
};

void func(){
    Complex obj;
}

int main(){
    func();
}