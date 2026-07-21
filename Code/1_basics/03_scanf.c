/* TOPICS: 
 * scanf()
    * format_specifier : float vs double 
 */
#include <stdio.h>
#include <string.h> // required for strcspn

int main() {
    char name[100];
    int age;

    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age: " );
    scanf("%d", &age);
  
    if (age >= 18) {
        printf("Hello %s, welcome to the program\n", name);
    } else if (age < 18 && age > 0) {
        printf("You are underage\n");
    } else {
        printf("Invalid input\n");
    }
    return 0;
}
