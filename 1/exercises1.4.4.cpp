// // Exercise 1.17
// /*
//  * If input values are all equal, this program will print the number of
//  * input values that have been inputted.
//  * If there's no duplication, this program will only print the occurence
//  * of the inputted number as 1-time occurence.
//  */

// // Exercise 1.18
// #include <iostream>
// int main()
// {
//     int recNum = 0, num = 0;
//     if (std::cin >> recNum) {
//         int occ = 1;
//         while (std::cin >> num) {
//             if (recNum == num)
//                 ++occ;
//             else {
//                 std::cout << recNum << " occurs " << occ << " times"
//                           << std::endl;
//                 recNum = num;
//                 occ = 1;
//             }
//         }
//         std::cout << recNum << " occurs " << occ << " times"
//                       << std::endl;
//     }
//     return 0;
// }

// /*
//  * By inputting:
//  * 22 22 22 22 22 22 (press Enter and press Ctrl + D subsequently)
//  * the result is:
//  * 22 occurs 6 times
//  * 
//  * By inputting:
//  * 11 22 33 44 55 66 (press Enter and press Ctrl + D subsequently)
//  * the result is:
//  * 11 occurs 1 times
//  * 22 occurs 1 times
//  * 33 occurs 1 times
//  * 44 occurs 1 times
//  * 55 occurs 1 times
//  * 66 occurs 1 times
//  */

// // Exercise 1.19
// #include <iostream>
// int main()
// {
//     int num1 = 0, num2 = 0;
//     std::cout << "Please input a number: " << std::endl;
//     if (std::cin >> num1) {
//         std::cout << "Please input another more: " << std::endl;
//         while (std::cin >> num2) {
//             if (num1 < num2) {
//                 ++num1;
//                 std::cout << "Numbers in between those two numbers are: "
//                           << std::endl;
//                 for (num1; num1 < num2; ++num1)
//                     std::cout << num1 << std::endl;
//             }
//             else {
//                 std::cout << "Please re-input a second number that is"
//                           << " greater than the first number!"
//                           << std::endl;
//                 // num1 = 0, num2 = 0;
//             }
//             std::cout << "Press Ctrl + D to exit" << std::endl;
//         }
//     }
//     return 0;
// }