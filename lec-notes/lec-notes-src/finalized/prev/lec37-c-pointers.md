---
title: Lecture 24
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## C - Pointers

---

### Basic Idea

Q. What is a pointer?
A. A different variable type that stores a memory address

* Associated with a specific variable type, aka
    * int pointer stores the memory address of an int
    * float pointer stores the memory address of a float
    * char pointer stores the memory address of a char

---

### Relevant Operators

* `&` -> reference, aka "address of" operator
    * used to get the memory address of a variable
    * using it is known as "referencing"
* `*` -> dereference, aka "value of" operator
    * used to get the actual value stored at the
      memory address pointed to
    * using it is called "dereferencing" a pointer

---

### Declaring pointers

```
int *iptr;
char *cptr;
float *fptr;
```

* Notice the `*` in front of the variable name (this is what makes a pointer)
* They don't have to have "ptr" in the name

---

### Assigning Values

* How do I change what value is stored at the memory address pointed to by a pointer?

```
int *iptr;
int *jptr;
int a, b, c;

a = 5;
b = 6;
jptr = &a;
iptr = &c;
*iptr = 100;
```

---

### Printing Pointers

* `printf` command
* printing memory address:
    * need to use a different formatter:  `%p`
* printing value stored:
    * use appropriate formatter for datatype

---

### Be Careful

* C will let you do a lot of things
* You can easily do something other than what you intended...
* Pay attention to warnings - they can help
