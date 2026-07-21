/* TOPICS:
 * format specifiers : %d, %f, %g, %z, %e(E), %s
 */
#include <stdio.h>

int main(void) {

    // Digits : %d 
    int num1 = 1;
    printf("Number : '%-3d' \n", num1);
        // %3d : '  1'
        // %-3d : '1  '
        // %+3d : '+1 '

    // Float/Double : %f %lf
    float num2 = 3.1415926;
    printf("Float : '%+.6f' \n", num2); 
        // rounds ..26 = 3

    // Scientific Notation : %e %E
    double num3 = 1200000; 
    printf("Scientific Notation : '%.2e' \n", num3);
        // 1.20e+06 = 1.20 * 10^6

    return 0;
}

