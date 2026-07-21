/* TOPICS:
 * printf()
 * datatypes and variables
 */
#include <stdio.h>


int main(void) {

    // CALCULATE VOLUME : 

    // ---INTEGER--- 
    int length, width, height, volume; // declared

    length = 10; // initialized (assigin = changing initial value)
    width = 10;
    height = 15; 
    volume = length * width * height;

    printf("Length : %d,\nWidth : %d,\nHeight : %d,\n", length, width, height);
    printf("The volume is %d\n", volume); 
        // or : `printf("the volume is %d\n", length * width * height);`

    // --FLOAT--- 
    float profit = 2150.5;
    printf("The profit is $%.2f\n", profit);

    return 0;
}
