// Exercise 1.16
#include <iostream>
int main()
{
    int sum = 0;
    std::cout << "*press (Ctrl + d) when done\n" "Insert numbers: " 
              << std::endl;
    for (int val; std::cin >> val;)
        sum += val;
        std::cout << "Sum is " << sum << std::endl;
    return 0;
}