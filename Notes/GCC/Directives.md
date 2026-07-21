tags: #TODO

---
# Directives in C-Preprocessing

## Macro-Constant

A preprocessing directive, so that when the program is pre-processed, it replaces the directive name with it's value in all lines of code
- All caps is a programming convention followed for convenience

```c
#include <stdio.h>

#define PI = 3.14159

int main(void){
    printf("The constant Pi is : %d", PI) 
    return 0;
}
```



