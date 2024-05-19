#include<iostream>
using namespace std;

int area(int, int);
float area(int);

int main(){
    int r;
    cout<<"Enter radius of a circle ";
    cin>>r;
    float A = area(r);
    cout<<"\nArea of circle is "<<A;
    int l,b,a;
    cout<<"\nEnter length and breadth of a rectangle ";
    cin>>l>>b;
    a = area(l,b);
    cout<<"\nArea of rectangle is "<<a;
}

float area(int R){
    return (3.14*R*R);
}
int area(int L, int B){
    return (L*B);
}