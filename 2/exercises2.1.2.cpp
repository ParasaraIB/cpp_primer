// Exercise 2.3
/*
unsigned u = 10, u2 = 42;
[In] std::cout << u2 - u << std::endl;  // [Out] 32
[In] std::cout << u - u2 << std::endl;  // [Out] 4294967264
[In] int i = 10, i2 = 42;               
[In] std::cout << i2 - i << std::endl;  // [Out] 32
[In] std::cout << i - i2 << std::endl;  // [Out] -32
[In] std::cout << i - u << std::endl;   // [Out] 0
[In] std::cout << u - i << std::endl;   // [Out] 0
*/

// // Exercise 2.4
// #include <iostream>
// int main()
// {
//     unsigned u = 10, u2 = 42;
//     std::cout << u2 - u << std::endl;
//     std::cout << u - u2 << std::endl;
//     int i = 10, i2 = 42;
//     std::cout << i2 - i << std::endl;
//     std::cout << i - i2 << std::endl;
//     std::cout << i - u << std::endl;
//     std::cout << u - i << std::endl;
//     return 0;
// }