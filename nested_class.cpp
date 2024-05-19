#include<iostream>
#include<string.h>
using namespace std;

class Student{
    private:
        int rollno;
        char name[20];
        class Address{
            private:
                int houseno;
                char street[20];
                char city[20];
                char state[20];
                char pincode[7];
            public:
                void setAddress(int h, char *s, char *c, char *st, char *p){
                    houseno = h;
                    strcpy(street, s);
                    strcpy(city, c);
                    strcpy(state, st);
                    strcpy(pincode, p);
                }
                void showAddress(){
                    cout<<houseno<<endl;
                    cout<<street<<" "<<city<<endl;
                    cout<<state<<endl;
                    cout<<pincode<<endl;
                }
        };
        Address add;
    public:
        void setRollno(int r){
            rollno = r;
        }   
        void setName(char *n){
            strcpy(name, n);
        }
        void setAddress(int h, char *s, char *c, char *st, char *p){
            add.setAddress(h,s,c,st,p);
        }
        void show_student(){
            cout<<"Student Data: "<<endl;
            cout<<rollno<<endl;
            cout<<name<<endl;
            add.showAddress();
        }
};
int main(){
    // Student::Address a1; // Object of inner class if public
    Student s1;
    s1.setRollno(100);
    s1.setName("Rahul");
    s1.setAddress(301,"Hanuman Gali","Bhopal","462042","Madhya Pradesh");
    s1.show_student();
}