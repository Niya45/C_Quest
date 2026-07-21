/* TOPICS :
 * Switch-Case 
 */
#include <stdio.h>

int main() {
    int grade;

    printf("Enter your Grade (1-10): ");
    scanf("%d", &grade);

    switch (grade) {
        case 10: case 9: 
            printf("Excellent!");
            break; // "Excellent" for 10 and 9
        case 8: case 7: 
            printf("Good");
            break;
        case 6: case 5: 
            printf("Average");
            break;
        case 4: case 3: 
            printf("Below Average");
            break;
        case 2: case 1: 
            printf("Failing, disappointed (-_-)");
            break;
        default : 
            printf("Not valid");
            break;
    }
    return 0;
}
