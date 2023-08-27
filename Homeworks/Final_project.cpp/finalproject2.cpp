#include <iostream>
#include <string>
using namespace std;
// part 1: implementation of Date class
class Date {
private:
    int year, month, day;
public:
    Date(int year, int month, int day) {
        this->year = year; this->month = month; this->day = day;
    }//regular construction 
    void output() { cout << year <<"-" << month <<"-" << day << endl; } //output 
};
// part 1: implementation of Book class
class Book {
private:
    string title, author, publisher;
    Date *pubDate;
    double price;
    Book* next;
public:
    Book(string title, string author, string publisher, int year, int month, int day, double price) {
        this->title = title; this->author = author; this->publisher = publisher;
        this->pubDate = new Date(year, month, day); this->price = price;
        this->next = NULL;
    }//regular construction 
    ~Book() { delete[] pubDate; }//output 

    void output() {
        cout << title << " by " << author << ", published by " << publisher << endl;
        cout << "Published on: "; pubDate->output();
        cout << "Price: " << price << endl;
    } // output everything about book

    Book* getNext() { return next; }
    void setNext(Book* next) { this->next = next; }
};

class Bookstore {
private:
    int numberBooks;
    Book* head;
public:
    Bookstore() {
        head = NULL;
        numberBooks = 0;

        cout << "Enter the number of books: "; cin >> numberBooks;
        for (int i=0; i<numberBooks; i++) {
            string title, author, publisher;
            int year, month, day;
            double price;

            cout << "Enter title: "; cin >> title;
            cout << "Enter author: "; cin >> author;
            cout << "Enter publisher: "; cin >> publisher;
            cout << "Enter publication year, month, and day: ";
            cin >> year >> month >> day;
            cout << "Enter price: "; cin >> price;

            Book* newBook = new Book(title, author, publisher, year, month, day, price);
            newBook->setNext(head);
            head = newBook;
        }
    } // default constructor

    ~Bookstore() {
        Book* curr = head;
        while (curr) {
            Book* temp = curr;
            curr = curr->getNext();
            delete temp;
        }
    } // destructor

    void output() {
        Book* curr = head;
        while (curr) {
            curr->output();
            curr = curr -> getNext();
        }
    }  // output()

    void addBook() {
        string title, author, publisher;
        int year, month, day;
        double price;

        cout << "Enter title: "; cin >> title;
        cout << "Enter author: "; cin >> author;
        cout << "Enter publisher: "; cin >> publisher;
        cout << "Enter publication year, month, and day: ";
        cin >> year >> month >> day;
        cout << "Enter price: "; cin >> price;

        Book* newBook = new Book(title, author, publisher, year, month, day, price);
        newBook->setNext(head);
        head = newBook;
        numberBooks++;
    }

    void deleteBook() {
        if (!head) {
            cout << "Bookstore is empty!" << endl;
            return;
        }

        Book* temp = head;
        head = head->getNext();
        delete temp;
        numberBooks--;
    }
    void store() {
    cout << "under construction" << endl;
    }
};
int main()
{
// part 1: instantiate a class bookstore
Bookstore bookstore;
// part2: manipulate the books info in bookstore
bool finished = false;
while (!finished) {
    cout << "select: (0)output; (1)add; (2)delete; (3)store; (4)exit" << endl;
    int option;
    cin >> option;
    switch (option) {
    case 0: bookstore.output(); break;
    case 1: bookstore.addBook(); break;
    case 2: bookstore.deleteBook(); break;
    case 3: bookstore.store(); break;
    case 4: finished = true; break;
    default: cout << "wrong option!" << endl;
    } // switch
} // while

return 0;
}