/*************************************************************
SUBJECT: CSEB2213/ CSEB214/ CSNB244 PROGRAMMING II/ PROGRAMMING II WITH C++
DATE: 15/10/2022
DESCRIPTION: a program to read weight and output price
NAME:
1. Fahmy B. Mohd Nizam (SW01081798)
2. Muhammad Safwan B. Serat (SW01081796 )
3. Muhammad Thaqeef Farhan B. Alwan (SW01081851)
QUESTION: Assignment 1
*************************************************************/
#include <iostream>
#include "FruitList.h"
#include "MyStruct.h"
#include "Receipt.h"

#define size 5

using namespace std;

void getWeight(MyStruct *);

int main()
{
    FruitList fruitList;
    Receipt receipt;
    MyStruct *pointer;
    MyStruct fruit[size];

    // ASSIGN address to pointer
    pointer = fruit;

    // INITIALIZE fruit name
    fruit[0].name = "Sunkist Orange";
    fruit[1].name = "Strawberry";
    fruit[2].name = "Papaya";
    fruit[3].name = "Star fruit";
    fruit[4].name = "Kiwi";

    // INITIALIZE fruit price
    fruit[0].price = 2;
    fruit[1].price = 22;
    fruit[2].price = 5;
    fruit[3].price = 6;
    fruit[4].price = 10;

    // INITIALIZE fruit weight
    for (int i = 0; i < size; i++)
        fruit[i].weight = 0;

    // CALL function
    fruitList.printList();
    getWeight(pointer);
    receipt.printReceipt(fruit);

    return 0;
}

void getWeight(MyStruct *pointer)
{
    int input = 0;
    while (input != -1)
    {
        cout << "\nEnter fruit code <-1 to stop>: ";
        cin >> input;

        // IN BOUND
        if (input >= 0 && input <= 4)
        {
            cout << pointer[input].name << endl;

            float weight = 0;
            cout << "Enter weight<Kg>: ";
            cin >> weight;

            // ERROR CHECKING
            if ((weight + pointer[input].weight) <= 0)
                cout << "Invalid input!" << endl;
            else
                pointer[input].weight += weight;
        }
        // EXIT
        else if (input == -1)
            break;
        // OUT OF BOUND
        else
            cout << "Invalid input!" << endl;
    }
}
