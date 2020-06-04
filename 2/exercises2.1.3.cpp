// Exercise 2.5
/*
(a) 'a'  -> character literal represents a single character.
(a) L'a' -> wide character literal with wchar_t type which can represent 16 bits
            of character variants but, it can only display one character at 
            initialization.
(a) "a"  -> string literal can be used to represent multiple character at its
            initialization. There are in minimal 8 bits charcter variant that can
            be represented.
(a) L"a" -> wide string literal which can represent string literal with w_char
            type. It can be used to represent multiple character at one time a.k.a
            string that is the variant of 8 bits character.

(b) 10   -> decimal notation of integer literal (8 bits).
(b) 10u  -> decimal notation of char16_t (16 bits).
(b) 10L  -> decimal notation of char32_t (32 bits).
(b) 10 uL-> decimal notation of unicode long 16 character.
(b) 012  -> octal notation of integer literal.

(c) 3.14 -> normal double type.
(c) 3.14f-> single precision of double type.
(c) 3.14L-> extended precision of double type.

(d) 10   -> integer type.
(d) 10u  -> integer unicode 16 character type.
(d) 10.  -> float type with single trailing decimal point.
(d) 10e-2-> floating type (scientific notation).
*/

// Exercise 2.6
/*
 * The first initialization is valid and it behaves just as a standard
 * integer type.
 * The second initialization is invalid since there is no 090 in octal
 * notation of integer literal. This happens due to the limitation of
 * 3 bits format in octal which can only represent numbers from 0 - 7.
*/

// // Exercise 2.7
// #include <iostream>
// int main()
// {
//     std::cout << "Who goes with F\145rgus?\012" << std::endl;
//     std::cout << 3.14e1L << std::endl;
//     std::cout << 1024.f << std::endl;  /* have to be written with "."
//                                        before f */
//     std::cout << 3.14L << std::endl;
//     return 0;
// }

// // Exercise 2.8
// #include <iostream>
// int main()
// {
//     std::cout << "2\t\115\n" << std::endl;
//     return 0;
// }