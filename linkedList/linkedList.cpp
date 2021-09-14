// linkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    list L;
    int N;
    cout << "please Enter your list's number and at the end enter a negative number:\n ";
    cin >> N;
    int i = 0;
    while (N>=0)
    {
        i++;
        L.AddToList(N);
        cin >> N;
    }
    cout<<"lenght of your list is: "<<L.lenghth()<<"\n";
    L.SortList();
    if (i > 0)
    {
        L.PrintList();
    }
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
