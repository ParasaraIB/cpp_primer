// Exercise 2.18

// // Program to change the value of a pointer
// #include <iostream>
// int main()
// {
//     double now = 2020;
//     double *ftr = &now;
//     double *tbt = nullptr;
//     tbt = ftr;
//     std::cout << *tbt << std::endl;
//     return 0;
// }

// // Program to change the value to which the pointer points
// #include <iostream>
// int main()
// {
//     int idp = 1945;
//     int *a;
//     a = &idp;
//     std::cout << *a << std::endl;
//     return 0;
// }

// Exercise 2.19
/*
 * Pointers are object that points to another type of object whereas 
 * References are not an object since it is just, in simple way,
 * alternative name of an object that has been defined.
 */

// Exercise 2.20
/*
 * This program initialized an int object i with value of 42.
 * p1 holds the addres of i and it is a pointer to i making *p1 = 42.
 * *p1 = *p1 * *p1 will display the result of 42 * 42. 
 */
// #include <iostream>
// int main()
// {
//     int i = 42;
//     int *p1 = &i;
//     *p1 = *p1 * *p1;
//     std::cout << *p1 << std::endl;
//     return 0;
// }

// Exercise 2.21
/*
 * (a) Illegal since pointers type and the address of the object it points
 *     to is different.
 * (b) Illegal. Pointers can't be pointed directly to an object instead it
 *     can be used to point to the address of object. Subsequently, it may
 *     use to access an object through dereference operator.
 * (c) Legal. It is valid to use pointers to point to the address of other
 *     object since it won't lead to conversion (dereference). Pointing a
 *     pointer to an object directly will lead to conversion. It is invalid
 *     to convert object type this way.
 */

// Exercise 2.22
/*
 * Let:
 * int *p;
 * if (p)   -> it will be evaluated as false since p points to literal 0.
 * if (*p)  -> it invalid since declaration of *p points to liteeral 0 not
 *             to an object of std library instead it points to preprocessor
 *             variable which runs before the program is compiled.
 */

// Exercise 2.23
/*
 * If the pointer is only declared it is certainly valid.
 * However, if the pointer points to an directly to an object with the same
 * or different type it is invalid.
 * In order to be valid pointer value (adderess) can point to an object, to
 * the location just immediately past the end of an object, and null pointer.
 */

// Exercise 2.24
// /*
//  * It is illegal due to the difference in the type of pointer and the object
//  * whose address it is pointed to. If the type is same, it will be valid.
//  */
// #include <iostream>
// int main()
// {
//     int i = 42;
//     void *p = &i;
//     int *lp = &i;
//     std::cout << p << " " << *lp << std::endl;
//     return 0;
// }