#include <stdio.h>
#include <stdbool.h>

/* TODO 
 * C is a statically typed language 
 * Data types 
    * int : 4 bytes
        * storing +/- 
            * + : straightforward
            * - : to get -x, invert the bits in the binary of x and +1 ??
        * truncation : removes decimals after the point.
    * short : 2 bytes
    * long : 4/8 bytes
    * long long : 8 bytes
    * float vs double
    ********************************
    * char : 8 bits (1 byte)
        * char: 
            * char grade = 'A';
            * a character literal of type `char`; stores the value 65 for A
            * "A" is a char* / char[] holding 64 for A and \0 for null terminator
        * char[]:
            * char name[] = "Niya"; // ['N', 'i', 'y', 'a', '\0']
        * char*
            * pointer : variables that store a memory address
            * in this case : char* is a pointer to the data stored in read-only data section of mem
            * have \0 at the end of the char in the data-segment
        * string : list of char
        * null terminator : at the end of char (\0)
        * String-aware func vs Mem* func
    ********************************
    * bool : true(1) / false(0)
*/

int main() {

    int age = 15;
    float PI = 3.14159265; 
    double pi = 3.14159265;
    char str[] = "abcdef\0hijklmnop";
    char strin[] = "abcdef\\0hijklmnop";

    printf("Hello, you are %d years old\n", age);
    printf("The value for PI in float: %.9f \n",PI);
    printf("The value for PI in double: %.9E \n",pi);
    printf("%s\n", str);
    printf("%s\n", strin); 
    
    char name[] = "Niya";
    char grade = 'A';
    bool gotA = true;
    
    printf("My name is %s\n", name);
    printf("my grade is %c\n", grade);
    printf("Did I get an A? : %d", gotA); // 1 = true; 0 = false
    printf("second letter of name : %c\n", name[1]); //accessing a single character in the char[]
    return 0;
}
