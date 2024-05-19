#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
    public:
        void setStudent(string s, int a){
            name = s;
            age = a;
        }
        void showStudent(){
            cout<<"\nName : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
};

int main(){
    pair <string, int> p1;
    pair <string, string> p2;
    pair <string, float> p3;
    pair <int, Student> p4;

    p1 = make_pair("Rahul", 16);
    p2 = make_pair("India", "New Delhi");
    p3 = make_pair("Drilling C++", 345.5f);
    Student s1;
    s1.setStudent("Aishwarya", 19);
    p4 = make_pair(1, s1);

    cout<<"\nPair1 : "<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<"Pair2 : "<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<"Pair3 : "<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    cout<<"Pair4 : "<<endl;
    cout<<p4.first<<" ";
    Student s2 =  p4.second;
    s2.showStudent();
}