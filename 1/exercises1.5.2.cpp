// Exercise 1.23
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2;
    if (std::cin >> item1) {
        while (std::cin >> item2) {
            if (item1.isbn() == item2.isbn()) 
                item1 += item2;
            else {
                std::cout << item1 << std::endl;
                item1 = item2;
            }    
        }
        std::cout << item1 << std::endl;
    }
    return 0;
}

// // Exercise 1.24
// /*
//  * The program in Exercise 1.23 can be used to calculate the occurence
//  * of each isbn in several transactions and provide grouped records for
//  * each ISBN if and only if the inputted transaction given in a sequential
//  * order. For example: aa 1 100 aa 1 100 aa 1 100 aa 1 100 bb 1 200 bb 34 200
//  * yield: 
//  * aa 4 400 100
//  * bb 35 7000 200