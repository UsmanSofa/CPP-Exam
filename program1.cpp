#include <iostream>
using namespace std;

class Book
{
private:
    char title[50];
    char author[50];
    char publishyear[5];

public:
    void setBooks()
    {
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Author's Name: ";
        cin >> author;
        cout << "Enter Book Publish Year: ";
        cin >> publishyear;
    }
    void getBooks()
    {
        cout << "Book Title: " << title << endl
             << "Book Author: " << author << endl
             << "Book Publish Year: " << publishyear << endl << endl;
    }
};

int main()
{
    int n;
    cout << "Enter The Amount of Book Details You want to enter: ";
    cin >> n;
    Book books[n];
    for (int i = 0;i<n;i++){
        books[i].setBooks();
    }
    cout << "Book Details:-" << endl << endl;
    for (int i = 0;i<n;i++){
        books[i].getBooks();
    }
}
