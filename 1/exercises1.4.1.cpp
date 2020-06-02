// // Exercise 1.9
// #include <iostream>
// int main()
// {
//     int sum = 0, val = 50;
//     while (val <= 100) {
//         sum += val;
//         ++val;
//     }
//     std::cout << "Sum of 50 to 100 (inclusive) is " << sum << std::endl;
//     return 0; 
// }

// // Exercise 1.10
// #include <iostream>
// int main()
// {
//     int num = 10;
//     while (num >= 0) {
//         std::cout << num << std::endl;
//         --num;
//     }
//     return 0;
// }

// // Exercise 1.11
// #include <iostream>
// int main()
// {
//     std::cout << "Input two integer numbers: " << std::endl;
//     int num1 = 0, num2 = 0;
//     std::cin >> num1 >> num2;
//     std::cout << "Number in between these two numbers are: " <<std::endl;
//     while (num1 < num2) {
//         ++num1;
//         std::cout << num1 << std::endl;
//         ++num1;
//     }
//     return 0;
// }