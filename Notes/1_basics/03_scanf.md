tags : #TODO 
topics : scanf(), fgets()

---
# Scanf() : get input 

---
## scanf(), integers : 


```c
scanf("%d", &integer);
scanf("%lf", &double);
```

- `&` for int of float : 
    - the variable name represents the value and `&` gives it an "address"
    - these varialbes ends exactly when the data type's size ends. 
        - eg. 4 bytes for `var int age;`


---
## scanf(), string :


Only reads unpto the first `space` or `\n`

```c
scanf("%9s", var_string[]);
```
- **Reads only the first 9 bytes** : 
    - even if the var is `string[10]`, it only has 9 letters(+ `\0`). Thus using `%9s`
    - If the limit to input isn't specified, C lets you add more data to the string 
        - (which has only limited space allocated eg. `string[10]`) 
    - This causes a buffer overflow, where C writes beyond the buffer 
- No `&` for input arrays : 
    - the name of an array acts like a pointer to the first element of the array;
    - `scanf()` only needs to know where to start storing the data


```c
scanf("%99s[^\n]", string);
```
- Parts of the statement : 
    - `%99` : reads only the first 99 chars
    - `[ ]` : starts and ends the scanset
    - `^` : not
    - `\n` : newline (ends at the first \n)


---
## Scanning String after an Integer :


- When giving input for an integer then pressing enter
    - In the input buffer : `[4][2][\n]`
- First `scanf("%d", &num);` : sees 42 and grabs it, leaving `\n` in the buffer
- The next `scanf()`: 
    - looking for a char/string sees `\n` and exits, assuming the string ended 

**SOLUTIONS** : 

### Leading space (for %c) : 

```c
scanf(" %c", &letter)
scanf(" %s", string)
```


### fgets() : 

```c
fgets(var, sizeof(var), stdin);
```
- captures both " " and "\n"


```c
string[strcspn(name, "\n")] = '\0';
```
- `strcspn()` searches the string from the start and returns the index of the given character
- replace `\n` from the fgets() input with \0
