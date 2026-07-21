/* TOPICS :
 * While, Do While, For
 * statements : continue, break
 */
#include <stdio.h>

int nullStatement();

int main() {

    // 1. WHILE LOOP :
    int num1 = 0;
    printf("WHILE LOOP : \n");
    while (num1 <= 10) {
        printf("%d ", num1);
        num1++;
    }
    printf("\n"); 


    // 2. DO WHILE : 
    int num2 = 0;
    printf("DO WHILE : \n");
    do {
        printf("%d ", num2);
        num2++;
    } while (num2 <= 10);
    printf("\n");


    // 3. For Loop
    printf("FOR LOOP : \n");
    for (int i = 0; i <= 10; i++) {
        printf("%d ", i);
    }

    for (int i = 0; i < 10; i++) {
        if (i == 2) continue; // Skips the code below when i is 2
        if (i == 5) break;    // Completely stops the loop when i is 5
        printf("%d ", i);
    } // Output will be: 0 1 3 4
    printf("\n"); 

    // 4. Null Statement : 
    nullStatement();

    return 0;
}


int nullStatement() {
   
    // null statement; does nothing

    char name[] = "Sparrow";
    char *ptr = name;
    
    while (*ptr++)
        ; /*Null Statement*/
   
    // find length of string : 
        // subtract the starting address from the final address (-1 to exclude \0)  
    int length = ptr - name - 1;
    printf("The length of the string is %d\n", length);

    return 0;

    /* Note :
     `while (*ptr++) {}` : also works, and it's better for readability
     `while (condition); : accidental null statement, leads to errors
     */
}
