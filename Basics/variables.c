#include <stdio.h>

/* VARIABLES
* int x; // declare a var; do not use uninitialized vars, leads to unexpected behaviour
*/ 

int main() {
    //defining a variable : 
    int d;
    int a = 1, b = 3, c = 5; // can't initialize d inside this, redeclaring;
    d = 7; // no 'int' at the start

    int sum = a+b+c+d;

    printf("%d", sum);
    return 0;
}

// TODO
/* Format Specifiers : %d %f %g %E %e %s %c ; 
 * width, percision, flag
%d = digits
    int num = 1 ; ("%3d",num) = "  1"
    int num = 1 ; ("%-3d",num) = "1  "
    int num = 1 ; ("%+3d",num) = " +1"
    %f = float; %lf = double (use in scanf())
        float num = 12.12345 ; ("%.2f", num) = "12.12
        printf("%+9.4d", num) ; " +12.1234"
    %g = for double
        automatically picks between %f and %e based on the value's magnitude
    %E, %e = scientific notation   
        3.14E+05 : 3.14*10^5
        3.14D+00 : 3.14*10^0 = 3.14
    %s = string
*/


/* ARITHMETIC OPERATORS

(PEMDAS): + - * / % ++ --
x = 10;
    x++; //11
    x--; //10
    x+=3; //13
    x-=3; //10
    x*=2; //20
    x/=2; //10
    x%=3; //1
*/
