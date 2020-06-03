// // Exercise 1.20
// #include <iostream>
// #include "Sales_item.h"
// int main()
// {
//     Sales_item book;
//     std::cout << "Please input isbn, quantity, and avg.price in one line"
//               << " format! \ne.g. 0-201-78345-X 3 20.00\n" << std::endl;
//     while (std::cin >> book) {
//         std::cout << "\nisbn, quantity sold, avg.price of the book is: "
//                   << std::endl;
//         std::cout << book << std::endl;
//         std::cout << "\nPress Ctrl + D to exit\n" << std::endl;
//         std::cout << "Please input isbn, quantity, and avg.price in one line"
//                   << " format! \ne.g. 0-201-78345-X 3 20.00\n" << std::endl;
//     }
//     return 0;
// }

// // Exercise 1.21
// #include <iostream>
// #include "Sales_item.h"
// int main()
// {
//     Sales_item book1, book2;
//     std::cout << "Please input two-same books in an ordered format that "
//               << "consist of isbn, quantity, avg.price. For example:"
//               << "\ne.g. 0-201-78345-X 2 25.00" << std::endl;
//     while (std::cin >> book1 >> book2) {
//         std::cout << book1 + book2 << std::endl;
//         std::cout << "\nPress Ctrl + D to exit!\n" << std::endl;
//         std::cout << "Please input two-same book transactions in an ordered "
//                   << "format that consist of isbn, quantity, avg.price."
//                   << "\ne.g. 0-201-78345-X 2 25.00" << std::endl;
//     }
//     return 0;
// }

// // Exercise 1.22
// #include <iostream>
// #include "Sales_item.h"
// int main()
// {
//     Sales_item book1, book2;
//     std::cout << "Please input transaction of a same book in an ordered "
//               << "format of isbn, quantity, "
//               << "avg.price.\ne.g. 0-201-70353-X 4 24.99" <<std::endl;
//     if (std::cin >> book1) {
//         std::cout << "\nPlease insert the other transactions of this book: "
//                  << std::endl;
//         while (std::cin >> book2) {
//             book1 += book2;
//             std::cout << "\nPlease insert the other transactions of this book: "
//                       << std::endl;
//             std::cout << "\nPress Ctrl + D to stop" <<std::endl;
//         }
//         std::cout << "Total amount of transaction:\n" << book1 << std::endl;
//     }
//     return 0;
// }