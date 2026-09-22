#include <iostream>
using namespace std;

class Book {
    int bookCode;
    string bookAuthor;
    float bookPrice;

public:
    Book() {
        bookCode = 0;
        bookAuthor = "Unknown";
        bookPrice = 5.0;
    }

    Book(int code, string author, float price) {
        bookCode = code;
        bookAuthor = author;
        bookPrice = price;
    }

    void display() {
        cout << "Book Code - " << bookCode << endl;
        cout << "Author - " << bookAuthor << endl;
        cout << "Price - " << bookPrice << endl;
    }
};

int main() {
    Book b1;

    Book b2(101, "R.K. Narayan", 250.5);

    cout << "Book 1:" << endl;
    b1.display();

    cout << "\nBook 2:" << endl;
    b2.display();

    return 0;
}

