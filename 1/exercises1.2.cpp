// /*
//  *Exercise 1.3
//  */
// #include <iostream>
// int main()
// {
//     std::cout << "Hello World" << std::endl;
//     return 0;
// }

// /*
//  *Exercise 1.4
//  */
// #include <iostream>
// int main()
// {
//     std::cout << "Enter two numbers: " << std::endl;
//     int n1 = 0, n2 = 0;
//     std::cin >> n1 >> n2;
//     std::cout << "Multiplication of " << n1 << " and "
//               << n2 << " is " << n1 * n2 << std::endl;
//     return 0;
// }

// /*
//  *Exercise 1.5
//  */
// #include <iostream>
// int main()
// {
//     std::cout << "Enter two numbers: ";
//     std::cout << std::endl;
//     int n1 = 0;
//     int n2 = 0;
//     std::cin >> n1;
//     std::cin >> n2;
//     std::cout << "Multiplication of ";
//     std::cout << n1;
//     std::cout << " and ";
//     std::cout << n2;
//     std::cout << " is ";
//     std::cout << n1 * n2;
//     std::cout << std::endl;
//     return 0;
// }

// /* Exercise 1.6
//  * The program is not legal due to multiple 
//  * semicolon insertion before the ostream is ended 
//  * by std::endl.
//  * /
// #include <iostream>
// int main()
// {
//     std::cout << "Enter two numbers: " << std::endl;
//     int v1 = 0, v2 = 0;
//     std::cin >> v1 >> v2;
//     std::cout << "The sum of " << v1
//           << " and " << v2
//           << " is " << v1 + v2 << std::endl;
//     return 0;
// }