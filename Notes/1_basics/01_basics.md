tags: #TODO
topics: datatypes, variables 

---
C is a statically typed language 

# DATA TYPES

- **short** : 2 bytes
- **int** : 4 bytes
    - storing +ve : straightforwards
    - storing -v : to get -x, invert the bits in the binary of x and +1 #TODO
    - truncation : removing the decimals after the point #TODO
- **long** : 4/8 bytes
- **long long** : 8 bytes
- **bool** : true(1) / false(0)
- **float** : 4 bytes
    - ~6-7 accurate decimal points
- **double** : 8 bytes
    - ~15-16 accuracte decimal points

---

- char : 1 byte
    - `char grade = 'A';`
    - a character literal of type `char`; stores the value 64 for A
    - "A" is char[], holding `['A', \0'];`
- char[] : string
    - `char name[] = "Niya";` ['N', 'i', 'y', 'a', '\0']
    - `char name[20] = "twenty charctr long";`
    - `char *name = "pointer?";` #TODO
- char* : #TODO


# VARIABLES

- **Declaring** : `int age;` (creating)
- **Initializing** : `age = 16;` (giving value)
    - Uninitialized vars may occupy the space of garbage data 
- **Assigning** : `age = 20;` (changing value)


