#include <iostream>
#include<vector>
using namespace std;
int main(){ 
    vector <int> v1; 
    // vector <char> v2(4); 
    // vector <int> v3(5,10);
    // vector <string> v4(3,"hello");

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<v1[i]<<" ";
    // }
    
    // cout<<v4[0]<<endl;

    cout<<"Current Capacity is : "<<v1.capacity()<<endl;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(10*(i+1));
    }
    // v1.push_back(10);
    cout<<"Current Capacity is : "<<v1.capacity()<<endl;
    // v1.push_back(20);
    // cout<<"Current Capacity is : "<<v1.capacity()<<endl;
    // v1.push_back(30);
    // cout<<"Current Capacity is : "<<v1.capacity()<<endl;

    // cout<<"After pop"<<endl;
    // v1.pop_back();
    // cout<<"Current Capacity is : "<<v1.capacity()<<endl;
    // v1.pop_back();
    // cout<<"Current Capacity is : "<<v1.capacity()<<endl;
    // v1.pop_back();
    // cout<<"Current Capacity is : "<<v1.capacity()<<endl;
    // cout<<"Total number of elements are : "<<v1.size()<<endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<endl<<v1[i];
    }

    cout<<"\n\n";
    vector <int>::iterator it = v1.begin();
    v1.insert(it+3,35);

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<endl<<v1[i];
    }

    // v1.clear();
    // cout<<"Current Capacity is : "<<v1.capacity()<<endl;
    // cout<<"Total number : "<<v1.size()<<endl;

    // cout<<endl<<"Value at Index 3 : "<<v1.at(3)<<endl;

    // cout<<endl<<"First value is "<<v1.front();
    // cout<<endl<<"Last value is "<<v1.back();
}