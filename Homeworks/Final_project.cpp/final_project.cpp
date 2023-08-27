// #include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int year, month, day;
public:
    Date(int year, int month, int day) {
        this->year = year; this->month = month; this->day = day;
    }
    void output() { cout << year << month << day << endl; }
};

class Book {
private:
    string title, author, publisher;
    Date *pubDate;
    double price;
public:
    Book() {
        cout << "Enter title: "; cin >> title;
        cout << "Enter author: "; cin >> author;
        cout << "Enter publisher: "; cin >> publisher;

        cout << "Enter publication year, month, and day:";
        int year, month, day;
        cin >> year >> month >> day;
        pubDate = new Date(year, month, day);

        cout << "Enter price: "; cin >> price;
    } // default constructor

    ~Book() { delete[] pubDate; }

    void output() {
        cout << title << " by " << author << ", published by " << publisher << endl;
        cout << "Published on: "; pubDate->output();
        cout << "Price: " << price << endl;
    } // output everything about book
};

class Bookstore {
private:
    const int MaxBookNum = 100;
    int numberBooks;
    Book** list;
public:
    Bookstore() {
        list = new Book*[MaxBookNum];

        cout << "Enter the number of books:"; cin >> numberBooks;
        for (int i=0; i<numberBooks; i++) list[i] = new Book();
    } // default constructor

    ~Bookstore() {
        for (int i = 0; i < numberBooks; i++) delete[] list[i];
        delete[] list;
    } // destructor

    void output() {
        for (int i = 0; i < numberBooks; i++) list[i]->output();
    }  // output()

    void addBook() {
        if (numberBooks < MaxBookNum) list[numberBooks++] = new Book();
    }
    void deleteBook() {
        delete[] list[--numberBooks];
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
