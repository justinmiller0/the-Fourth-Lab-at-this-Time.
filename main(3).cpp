/////////////////////////////////////////////////////////////////////
// Name: Justin Miller
// Date: 9/30/2026
// Class: CSCI 1470.04
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Jonatan Reyes
// Program Description: Program that simulates a public library system
/////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int totalBorrowed;
int generateUserID();
int borrowBook(int& bookCount);
int log(int uid, int bookCount);
int report();

int main()
{
    int uid, bookCount;
    
    // Simulating book checkouts for a user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount); 
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Reporting end-of-day transactions
    report();

    return 0;
}

int generateUserID()
{
    static int ID = 1000;
    ID = ID + 1;
    return ID;
}

int borrowBook(int& bookCount)
{
    bookCount = bookCount + 1;
    totalBorrowed = totalBorrowed + 1;
    return bookCount;
}

int log(int uid, int bookCount)
{
    ofstream fout;
    fout.open("logs.txt", ios::app);
    fout << "User Id ............" << uid << endl << "Books Borrowed ........" << bookCount << endl << endl;
    fout.close();
    return 0;
}

int report()
{
    cout << "A total of " << totalBorrowed << " were checked out today.";
    ofstream fout;
    fout.open("logs.txt", ios::app);
    fout << "\nA total of " << totalBorrowed << " were checked out today.";
    return 0;
}
