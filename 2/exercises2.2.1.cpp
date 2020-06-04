// // Exercise 2.9
// #include <iostream>
// int main()
// {
//     int i = 3.14;
//     std::cout << i << std::endl;
//     return 0;
// }

/*
 * (a) illegal since input_value have to be initialized first before it
 *     is used to store value inputted by the user.
 * (b) illegal double list can't be initialized to with type of int since 
 *     it may lead to loss of information.
 * (c) illegal wage was not initialized in advance before it is used to 
 *     store avalue.
 * (d) legal double type of variable can be stored in int variable with
 *     some information loss in terms of decimal point.
 */

// // Exercise 2.10
// #include <iostream>
// std::string global_str;
// int global_int;
// int main()
// {
//     int local_int;
//     std::string local_str;
// }

/*
 * There is no initial values of those following variables: global_str
 * and local_str hence it will be initialized with default value of blank.
 * global_int is defined and hence initialized to default value since it 
 * was not explicitly initialized.
 * local_int is also defined and hence initilaized to default value.
 */