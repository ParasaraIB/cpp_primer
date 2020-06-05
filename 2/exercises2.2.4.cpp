// Exercise 2.13
/*
 * The value of j is 100 since it is initialized in the local scope
 * after the definition of the variable i.
 */
// #include <iostream>
// int i = 42;
// int main()
// {
//     int i = 100;
//     int j = i;
//     std::cout << j << std::endl;
//     return 0;
// }

// Exercise 2.14
/*
 * The following program is legal.
 * i will be displayed 100 since it is defined locally inside main body function.
 * sum will be displayed 9+8+7+6+5+4+3+2+1 = 45 since it's value is updated by 
 * addition operation with i defined locally inside for loop.
 */
// #include <iostream>
// int main()
// {
//     int i = 100, sum = 0;
//     for (int i = 0; i != 10; ++i)
//         sum += i;
//     std::cout << i << " " << sum << std::endl;
//     return 0;
// }