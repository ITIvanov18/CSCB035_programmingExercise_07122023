// ISBN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char isbn10[14];
    int cleanISBN10[10];
    cout << "Enter a message: ";
    cin.getline(isbn10, 13);
    int c = 0;

    for (int i = 0; i < 13; i++) {

        if (isbn10[i] != '-' || isbn10[i] != 'X') {
            cleanISBN10[c] = isbn10[i];
        }
        else if (isbn10[12] == 'X') {
            cleanISBN10[c] = 10;
        }
        c++;
    }



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
