#include <iostream>

using namespace std;

int add(int = 0, int = 0, int = 0); // Default arguments

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    cout << "Sum of two numbers are " << add(a, b) << endl;
    int c;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;
    cout << "Sum of three numbers are " << add(a, b, c) << endl;
}
int add(int x, int y, int z)
{
    return (x + y + z);
}