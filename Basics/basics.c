#include <stdio.h>
#include <stdbool.h>

/* ARITHMETIC OPERATOR - tutorial (new page)
 * C is a statically typed language 
 * Variables:
    * int a = 1, b = 3, c = 5;
    * int d; // define a var; do not use undeclared vars, leads to unexpected behaviour
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
* Format Specifiers : %d %f %g %E %e %s %c ; width, percision, flag
    * %d = digits
        * int num = 1 ; ("%3d",num) = "  1"
        * int num = 1 ; ("%-3d",num) = "1  "
        * int num = 1 ; ("%+3d",num) = " +1"
    * %f = float; %lf = double (use in scanf())
        * float num = 12.12345 ; ("%.2f", num) = "12.12
        * printf("%+9.4d", num) ; " +12.1234"
    * %g = for double
        * automatically picks between %f and %e based on the value's magnitude
    * %E, %e = scientific notation   
        * 3.14E+05 : 3.14*10^5
        * 3.14D+00 : 3.14*10^0 = 3.14
    * %s = string
* Arithmetic operators (PEMDAS): + - * / % ++ --
* x = 10;
    * x++; // 11
    * x--; // 10
    * x+=3; // 13
    * x-=3; // 10
    * x*=2; // 20
    * x/=2; //10
    * x%=3; //1
*/

int main() {
    /*
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
    */
    char x = 'A';
    char name[] = "Niya";
    printf("My name is %s\n", name);
    printf("%c\n", name[1]); //accessing a single character in the char[]
    return 0;
}
