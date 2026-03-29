tags : #c #pending

---

# GCC : 

- Steps : 
    - **Pre-processing**
        - Use everything-macro in practice
            - Why use parantesise in functions_like macros?
        - Dive deep into : #ifdef, #ifndef, #if, #elif, #else, #endif
        - How does the pitfalls in cpp work?
    - **Compilation**
    - **Assembly**
    - **Linking**
- task : 
    - use gcc to get the intermediate files in each step and anlyze them

## Header Inclusion

- What is a header file
    - (if it doesn't contain ALL the functions or predefined vars, then what is it)

# Questions

- How do hardware actually stores integers?
	- float vs integers
- signed vs unsigned data
    - integer overflows
    - type confusing
    - off-by-one
    - uninitialized datad
    - (below)
- Register vs RAM (memory)
---

(things to do beyond C-practice)
- **buffer overflow** (writing beyond buffer)
	- Overwriting the Return Address to hijack execution.
- **null terminiator** 
    - string-aware functions can't read past them
    - Mem* functions can
    - +Bound checking
- **out-of-bounds read** 
    - reading memory that I don't own. eg: Heartbleed
- **stack walking backwards** 
    - pointers going higher in mem stack. 
    - saved rbp - return address
- **Integer Overflow** : 
	- Adding 1 to a signed 127 and getting -128
	- Bypassing a check like if (size + 1 < MAX).
- **Type Confusion** : 
	- Treating a signed value as unsigned
	- "Turning a negative ""error code"" into a massive ""memory size."""
- **Off-by-One** : 
	- Forgetting that arrays start at 0 and end at size - 1.
	- Overwriting a single byte (the saved frame pointer) to crash a stack.
- **Uninitialized Data** : 
	- Declaring int x; and assuming it's 0
	- "Leaking ""garbage"" from memory that might be a password or a pointer."
- tip : 
	- Try compiling with the `-fno-stack-protector` flag in GCC. 
	- Modern compilers add "Canaries" (small values placed on the stack to detect overflows) by default.
	- When seeing how memory breaks, turn off the safety features to see the "pure" hardware behavior (on a VM only)
