/* Exercise 1.12 */
/* 
 * This loop sum all the number in range of -100 to 100 with increment of 1.
 * The summation is stored at "sum" variable.
 */
// #include <iostream>
// int main()
// {
//     int sum = 0;
//     for (int i = -100; i<= 100; ++i)
//         sum += i;
//     std::cout << sum << std::endl;
//     return 0;
// }

// /* Exercise 1.13 (1.9) */
// #include <iostream>
// int main()
// {
//     int sum = 0;
//     for (int i = 50; i <= 100; ++i)
//         sum += i;
//     std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
//     return 0;
// }

// /* Exercise 1.13 (1.10) */
// #include <iostream>
// int main()
// {
//     for (int num = 10; num >= 0; --num)
//         std::cout << num << std::endl;
//     return 0;
// }

// /* Exercise 1.14 
//  * The difference between these loops is the way it is used to increment a value.
//  * In for loop, the value is incremented by stating the value, its upper limit
//  * to increment, as well as its increment value inside the for loop statement so
//  * that the code is easier to read and don't waste so many lines.
//  * Meanwhile, in the while loop, the range to increment as well as it increment
//  * value are stated in the body of the loops. It makes this loop tend to waste
//  * greater lines to be able to achieve the same tasks.
//  * The example is shown below as the Exercise 1.11 can be achieved by for loop
//  * with arguably a better line of code used.
//  */

// #include <iostream>
// int main()
// {
//     std::cout << "Enter two numbers: " << std::endl;
//     int num1 = 0, num2 = 0;
//     std::cin >> num1 >> num2;
//     std::cout << "Numbers in between these two numbers are: " << std::endl;
//     for (num1; num1 < num2; ++num1)
//         std::cout << num1 << std::endl;
//     return 0;
// }

// /* Exercise 1.15 */
// // Syntax Errors
// // error:missing ) in parameter list for main
// int main ( {
//     // error: used colon, not a semicolon, after endl
//     std::cout << "Read each file." << std::endl:
//     // error: missing quotes around string literal
//     std::cout << Update master. << std::endl;
//     // error: second output operator is missing
//     std::cout << "Write new master." std::endl;
//     // error: missing ; on return statement
//     return 0
// }
// // Type Errors
// /* Passing an argument to function that is not relevant to its type. For
//  * exmple: passing int to string literal.
//  */
// // Declaration Errors
// #include <iostream>
// int main()
// {
//     int v1 = 0, v2 = 0;
//     std::cin >> v >> v2; // error: uses "v" not "v1"
//     // error: cout not defined;should be std::cout
//     cout << v1 + v2 << std::endl;
//     return 0;
// }