#include <iostream>
using namespace std;

struct book
{
    private:
        int bookid;
        char title[30];
        float price;
    public:
        void input()
        {
            cout << "Enter book id, title, and price of book ";
            cin >> bookid >> title >> price;
            if (bookid < 0){
                bookid = bookid;
            }
        }
        void display()
        {
            cout << "\n"<< bookid << " " << title << " " << price;
        }
};

// void display(book);
// book input();

int main()
{
    book b1;
    b1.input();
    b1.display();
}

// void display(book b)
// {
//     cout << "\n"<< bookid << " " << b.title << " " << b.price;
// }

// book input()
// {
//     book b;
//     cout << "Enter book id, title, and price of book ";
//     cin >> b.bookid >> b.title >> b.price;
//     return (b);
// }