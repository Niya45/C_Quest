tags: #review
topics: Switch-Case

---

# Switch - Case

```c
switch (digit) {
    case value : "action";
        break;
    case next_value : "next action";
        break;
    default : "default action";
        break;
}
```

## multiple cases:
```c
switch (digit) {
    case value_1: case value_2: 
        "action";
        break;
    case value_3: case value_4: 
        "next action";
        break;
    default : 
        "default action";
        break;
}

```

## Break 

- When a `case` is true, it executes everything below it
- Using `break` cuts off the program from executing things in the next case

```c
switch (grade) {
    case 100 : printf("Good");
    case 90 : printf("Average");
    // if grade = 100, output will be : GoodAverage
}

switch (grade) {
    case 100 : printf("Good");
    break;
    case 90 : printf("Average");
    break;
    // if grade = 100, output will be : Good
}
```