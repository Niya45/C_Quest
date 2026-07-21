/* TOPICS :
 * Conditional statements : 
    * if, if else, else 
 */
#include <stdio.h>
#include <string.h>

int main() {
    // Input : 
    char name[100];
    int age;
    int grade;

    printf("Enter your Name : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; //replacing escape sequence with null-terminator

    printf("Enter your Age : ");
    scanf("%d", &age);

    // Conditions : 
    if (age >= 18) {
        printf("Welcome to the program, %s", name);
    } else if (age < 18 && age > 0) {
        printf("You are Underage");  
    } else {
        printf("Invalid Input");
    }

    return 0;
}


