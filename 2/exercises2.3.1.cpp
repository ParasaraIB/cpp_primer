// Exercise 2.15
/*
 * (b) int &rvall = 1.01;
 *     initializers must be an object. &rvall is a refernce bound to another
 *     object so that it is invalid to initialize a reference.
 * (d) int &rval3;
 *     this reference is not bound to another object. It is invalid
 *     to only declare a reference.
 */

// Exercise 2.16
/*
 * All the assignment statement is valid since integer literals can be
 * initialized by using int, float, or double. Since there is no conflicting
 * definition of reference, all statement will display a value if it is
 * outputted to the screen.
 * (a) r2 = 3.14159;
 *     Will be displayed as 3.14159 since it is refferred to the type of
 *     double.
 * (b) r2 = r1;
 *     0 will be the output since r1 referred to i which is initialized with
 *     int type value of 1.
 * (c) i = r2;
 *     i = 0 since r2 is referred to d which has 0 value of double type.
 * (d) r1 = d;
 *     r1 is equal to 0 of d with double type.
 */

// Exercise 2.17
/*
 * It will print 5 5
 */

#include <iostream>
int main()
{
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
    return 0;
}

/*
 * The correct answer is that code will print 10 10 
 */