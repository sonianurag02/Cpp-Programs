#include <iostream>
using namespace std;

class Account{
    private:
        int balance; // Instance member variable
        static float roi; // Static member variable / class variable
    public:
        void setBalance(int b){
            balance = b;
        }
        static void setRoi(float r){ // Static member function
            roi = r; 
        }
};

float Account:: roi = 3.5f; // Bydefault value will be 0

int main(){
    Account a1;
    a1.setRoi(4.5f); // Invoked with object
    Account::setRoi(4.5f); // Invoked without object
}