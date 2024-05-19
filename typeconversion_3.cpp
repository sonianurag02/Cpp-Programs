/* One Class type to Another Class type*/

#include <iostream>
using namespace std;

class Item;

class Product{
    private:
        int m, n;
    public:
        void setData(int x, int y){
            m = x; 
            n = y;
        }
        // void showData(){
        //     cout<<"\na = "<<m<<", b = "<<n<<endl; 
        // }
        int getM(){
            return(m);
        }
        int getN(){
            return(n);
        }
        // operator Item(){
        //     Item temp;
        //     temp.setm(a);
        //     temp.setn(b);
        //     return(temp);
        // }
};
class Item{
    private:
        int a, b;
    public:
        // void setData(int x, int y){
        //     a = x; 
        //     b = y;
        // }
        void setm(int x)
        {a=x;}
        void setn(int y)
        {b=y;}
        void showData(){
            cout<<"\na = "<<a<<", b = "<<b<<endl;
        }
        Item(){}
        Item(Product p){
            a = p.getM();
            b = p.getN();
        }
};
int main(){
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1 = p1;
    i1.showData();
}