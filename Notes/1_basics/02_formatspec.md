tags : #TODO 
topics : Format specifiers, arithametic operators

---
# Format Specifiers

- `*` : width, percision, flag
- `%d` : digits
- `%f` : float 
    - use in `printf()` for floats and doubles
- `%fl` : double 
    - use in `scanf()` for doubles
- `%g` : general
    - automatically chooses between %f and %e
- `%z` : Size_t modifier #TODO
    - %z is a length modifier, usually paired with `%u or %d` 
    - used in sizeof() operator or to handle array lengths safely
- `%e`, `%E` : Scientific notation
- `%s` : string

---
# ARITHMETIC OPERATORS

- **PEMDAS**: + - * / % ++ --

```markdown
x = 10;
    x++; //11
    x--; //10
    x+=3; //13
    x-=3; //10
    x*=2; //20
    x/=2; //10
    x%=3; //1
```

```c
int x = 5;
int y = ++x; // x becomes 6, then y becomes 6

int a = 5;
int b = x++; // b becomes 5, then a becomes 6
```

